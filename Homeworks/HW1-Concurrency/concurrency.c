/*
  OSU - CS444
  Homework 1 - Concurrency
  Behnam Saeedi, Levi Willmeth, Zhaoheng Wang
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "mt.h"

pthread_mutex_t bufferLock;

struct bufferItem{
	long tid;
  long number;
	long sleep_time;
};

struct bufferItem buffer[32];
int bufferIndex = 0;

void *producer(void *tid){
  printf("Starting producer thread..\n");
  for(int i=0; i<3; i++){
    long rNum = genrand_int32();
    long sleep = genrand_int32()%7+2; // consumer sleeps 2-9 sec
    struct bufferItem new = {i, rNum, sleep};
    printf("Producer (%ld) sleeping..\n", sleep);
    sleep(genrand_int32()%3+4); // producer sleeps 3-7 seconds
    printf("Producer (%ld) waking up..\n");
    pthread_mutex_lock(&bufferLock);
    printf("Producer (%ld) has the buffer.\n");

    pthread_mutex_unlock(&bufferLock);
    printf("Producer (%ld) relenquished the buffer.\n");
  }
}

int main(int argc, char **argv){

  // Seems like this seeds the mersenne twister somehow?
  unsigned long init[4] = {0x123, 0x234, 0x345, 0x456};
  unsigned long length = 4;
  init_by_array(init, length);

  printf("Number: %ld.\n", genrand_int32()%4+3);

  return 0;
}
