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

pthread_mutex_t bufferLock;

struct bufferItem{
	int tid;
  int number;
	int sleep_time;
};

struct bufferItem buffer[32];
int bufferIndex = 0;

void *producer(void *tid){
  printf("Starting producer thread..\n");
  for(int i=0; i<3; i++){
    int rand_num = genrand_int32();
    int sleep_time = genrand_int32()%7+2; // consumer sleeps 2-9 sec
    struct bufferItem new = {i, rand_num, sleep_time};
    printf("Producer (%d) sleeping for %d seconds.\n", i, sleep_time);
    sleep(genrand_int32() % 3+4); // producer sleeps 3-7 seconds
    printf("Producer (%d) waking up..\n", i);
    pthread_mutex_lock(&bufferLock);
    printf("Producer (%d) has the buffer.\n", i);

    pthread_mutex_unlock(&bufferLock);
    printf("Producer (%d) relenquished the buffer.\n", i);
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
