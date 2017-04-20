/*
	OSU - CS444
	Homework 1 - Concurrency
	Behnam Saeedi, Levi Willmeth, Zhaoheng Wang
*/

#include <unistd.h>
#include "mt19937ar.c"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <fstream>
#include <iostream>
#include "color.h"
#define MAXBUFFER 32
#define MAXCYCLES 5
pthread_mutex_t bufferLock;

struct bufferItem{
	int number;
	int consumer_sleep;
};

struct bufferItem buffer[MAXBUFFER];
volatile int bufferIndex = 0;

int getRandomInt(){
	unsigned int eax;
	unsigned int ebx;
	unsigned int ecx;
	unsigned int edx;
	int num;

	eax = 0x01;

	__asm__ __volatile__("cpuid;"
			 : "=a"(eax), "=b"(ebx), "=c"(ecx), "=d"(edx)
			 : "a"(eax)
			 );

	if(ecx & 0x40000000){
	__asm__ __volatile__("rdrand %0"
			:"=r" (num)
			);
	return abs(num);
	}
	else{
	num = genrand_int32();
	return num;
	}

}

void *producer(void *tid_x){
	// Produces items and puts them in the buffer.
	pid_t tid = syscall(SYS_gettid);
	int rand_num, cons_sleep_time, prod_sleep_time;
	struct bufferItem newItem;
	printf(ANSI_COLOR_GREEN"Starting producer thread %d..\n"ANSI_COLOR_RESET, tid);

	// To-do: end this thread eventually (not specified?)
	for(int i=0; i<MAXCYCLES; i++)
	{
		// Make a new item for the buffer
		rand_num = getRandomInt();							// value inside the item
		cons_sleep_time = getRandomInt() % 7+2; // consumer sleeps 2-9 sec
		prod_sleep_time = getRandomInt() % 3+4; // producer sleeps for 3-7 sec
		newItem.number = rand_num;
		newItem.consumer_sleep=cons_sleep_time;	// package into a struct

		printf(ANSI_COLOR_GREEN"Producer"ANSI_COLOR_RESET" (%d) sleeping for %d seconds.\n", tid, prod_sleep_time);
		sleep(prod_sleep_time);

		// Produce exactly one item for every sleep cycle
		bool has_produced = false;
		while(!has_produced){
		        // Ensure the buffer is not full before producing
			pthread_mutex_lock(&bufferLock);
			if(bufferIndex>=MAXBUFFER){
				// Release lock and try again later
				pthread_mutex_unlock(&bufferLock);
	                	continue;
			}
			printf(ANSI_COLOR_GREEN"Producer"ANSI_COLOR_RESET" (%d) waking up..\n", tid);
			printf(ANSI_COLOR_GREEN"Producer"ANSI_COLOR_RESET" (%d) has the buffer. %d\n", tid, bufferIndex);
			buffer[bufferIndex] = newItem;
			if(bufferIndex < MAXBUFFER -1)
        	        	bufferIndex++;
			pthread_mutex_unlock(&bufferLock);
			printf(ANSI_COLOR_GREEN"Producer"ANSI_COLOR_RESET" (%d) relenquished the buffer.\n", tid);
			has_produced = true;
		}
	}
	printf(ANSI_COLOR_GREEN"Producer"ANSI_COLOR_RED" (%d) is done.\n"ANSI_COLOR_RESET, tid);
}

void *consumer(void *tid_x){
	// Consumes items out of the buffer.
	pid_t tid = syscall(SYS_gettid);
	printf(ANSI_COLOR_YELLOW"Starting consumer thread %d.\n"ANSI_COLOR_RESET, tid);
	bufferItem consumedItem;
	// To-do: end this thread eventually (not specified?)
	for(int i=0; i<MAXCYCLES; i++){
        printf(ANSI_COLOR_YELLOW"Consumer"ANSI_COLOR_RESET" beginning to consume.\n");
		// Consume exactly one item for every sleep cycle
		bool has_consumed = false;
		do{
			// Ensure the buffer has something in it before consuming
			pthread_mutex_lock(&bufferLock);
			if(bufferIndex<=0){
				// Release lock and try again later
				pthread_mutex_unlock(&bufferLock);
				continue;
			}
			printf(ANSI_COLOR_YELLOW"Consumer"ANSI_COLOR_RESET" (%d) has the buffer. %d\n", tid, bufferIndex);
			// Take an item out of the buffer and consume (discard) it
			consumedItem = buffer[bufferIndex];
			buffer[bufferIndex].number=0;
			buffer[bufferIndex].consumer_sleep = 0;
			bufferIndex--;
			pthread_mutex_unlock(&bufferLock);
			printf(ANSI_COLOR_YELLOW"Consumer"ANSI_COLOR_RESET" (%d) consumed and relenquished the buffer.\n", tid);
			has_consumed = true;
		}while(!has_consumed);
		printf(ANSI_COLOR_YELLOW"Consumer"ANSI_COLOR_CYAN" (%d) sleeping for %d seconds.\n"ANSI_COLOR_RESET,tid, consumedItem.consumer_sleep);
		sleep(consumedItem.consumer_sleep);
		printf(ANSI_COLOR_YELLOW"Consumer"ANSI_COLOR_RESET" (%d) waking up..\n", tid);
	}
	printf(ANSI_COLOR_YELLOW"Consumer"ANSI_COLOR_RED" (%d) is done.\n"ANSI_COLOR_RESET, tid);
}

int main(int argc, char **argv){
	// Validate inputs
	bool DEBUG = 0;
	if(argc < 2 || !isdigit(*argv[1]) || !isdigit(*argv[2])){
		printf("Usage: %s [number of producers] [number of consumers]\n", argv[0]);
		return 0;
	}
	printf("This program will go through "ANSI_COLOR_RED"5"ANSI_COLOR_RESET" production and consumtion cycles.\n");
	int num_producers = atoi(argv[1]);
	int num_consumers = atoi(argv[2]);
	int totalThreads = num_producers+num_consumers;
	pthread_t threads[totalThreads+10];

	// Create all producers
	for(int i=0; i<num_producers; i++){
		if(pthread_create(&threads[i], NULL, producer, NULL)){
			fprintf(stderr, "Error creating producer thread.\n");
			return 2;
		}
	}

	// Create all consumers
	for(int i=num_producers; i<totalThreads; i++){
		if(pthread_create(&threads[i], NULL, consumer, NULL)){
			fprintf(stderr, "Error creating consumer thread.\n");
			return 2;
		}
	}

	printf("going into joining threads.\n");
	// Wait for all threads to finish
	for(int i=0; i<totalThreads; i++){
		if(pthread_join(threads[i], NULL)){
			fprintf(stderr, "Error joining thread.\n");
			return 2;
		}
	}
	printf("MAXBUFFER = %d, totalThreads = %d\n", MAXBUFFER, totalThreads);
	if(DEBUG)
		printf("Non-empty buffer contents:\n");
	if(DEBUG)
		for(int i=0; i<MAXBUFFER; i++){
			printf("%i\tNumber=%d, sleep=%d\n",i, buffer[i].number, buffer[i].consumer_sleep);
		}
	return 0;
}
