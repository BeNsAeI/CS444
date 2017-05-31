/*
OSU - CS444
Concurrency 4 - Barbershop Problem
Levi Willmeth, Behnam Saeedi, Zhaoheng Wang
*/

#include <unistd.h>
#include "mt19937ar.c"
#include <pthread.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include "color.h"

#define SLEEP_TIME 2

pthread_mutex_t chairs[10];
int client_seated;
int barber_awake;
int numChairs;
int coolDown = 1;
int strike[3];

void checkStrikes(){
	int all = 1;
	int none = 0;
	for(int i = 0; i < 3;i++)
	{
		all = all && strike[i];
		none = none || strike[i];
		printf("%d:%d, ",i,strike[i]);
	}
	printf("\n");
	if (all)
		coolDown = 0;
	if(!none)
		coolDown = 1;
	printf("coolDown status: %d\n",coolDown);
}

void *add_customer(void *tmp){
    int tid = pthread_self();
    //int * num = (int *) tmp;
    //free(tmp);
    int num = tid;
    int i;
    for(i = numChairs-1; i >= 0; i--){
        if(pthread_mutex_trylock(&chairs[i]) == 0){
	   strike[i] = 0;
	   checkStrikes();
	   if(coolDown){
		strike[i] = 1;
                // Customer is now sitting in a chair
                printf("[%04x] using resource\n",num);
                sleep(genrand_int32() % 3 + 1);
	        client_seated = 1;
	        pthread_mutex_unlock(&chairs[i]);
	        client_seated = 0;
		strike[i] = 0;
	        return 0;
	    }
	    strike[i] = 0;
        }else{
	    strike[i] = 1;
	    checkStrikes();
	}
    }
    printf("There were no chairs for customer %04x, so he leaves.\n", num);
}

int main(int argc, char **argv){
	printf("CS444 Group 10-03, Homework 4: Part 1:\n");
	if(argc < 2){
		printf("argc == %d.\n", argc);
		printf("Usage is: ./barberShop.o <num chairs>\n");
		return 1;
	}

	time_t t;
	srand((unsigned) time(&t));
	numChairs  = atol(argv[1]);
	pthread_t customers[10];
	int i;
	for(i = 0; i < numChairs; i++)
		strike[i] = 0;

	// Initialize chairs
	for(i = 0; i < numChairs; i++){
		printf("Initializing chair #%d.\n", i);
		pthread_mutex_init(&chairs[i], NULL);
	}

	// Just keep adding new customers
	for(i=0; ; i++){
		printf("Creating customer %d.\n", i);
		pthread_create(&customers[i%10], NULL, add_customer, (void *) &i);
		sleep( genrand_int32() % 3 + 1); // 1-2 inclusive
	}

	for(i=0; i<5; i++){
		if(pthread_join(customers[i], NULL)){
		    fprintf(stderr, "Error waiting for thread..\n");
		    return 2;
		}
	}

	printf("All done!\n");
	return 0;
}
