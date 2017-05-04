/*
	OSU - CS444
	Homework 1 - Dining Philosophers
	Behnam Saeedi, Levi Willmeth, Zhaoheng Wang
*/

#include <unistd.h>
#include "mt19937ar.c"
#include <pthread.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/syscall.h>
#define MAXPHILOSOPHERS 5

pthread_mutex_t forks[MAXPHILOSOPHERS];

int think(int philosopher)
{
    // Waits for 1-20 seconds, inc
    unsigned int delay = genrand_int32() % 19 + 1;
    printf("%d is thinking for %d seconds.\n", philosopher, delay);
    sleep(delay);
    return delay;
}

int eat(int philosopher)
{
    // Waits for 2-9 seconds, inc
    unsigned int delay = genrand_int32() % 7 + 2;
    printf("%d has begun eating for %d seconds.\n", philosopher, delay);
    sleep(delay);
    return delay;
}

void get_forks(int philosopher)
{
    // The goal is not to block the forks unless I can pick up both of them.
    int prevFork = (philosopher - 1 + MAXPHILOSOPHERS) % MAXPHILOSOPHERS;
    int nextFork = philosopher;
    int leftHand;
    int rightHand;

    // printf("%d is ready for forks %d and %d.\n", philosopher, prevFork, nextFork);
    pthread_mutex_lock(&forks[nextFork]);
    pthread_mutex_lock(&forks[prevFork]);
    printf("%d has forks %d and %d.\n", philosopher, prevFork, nextFork);
}

void put_forks(int philosopher)
{
    // Puts down the forks
    int prevFork = (philosopher - 1 + MAXPHILOSOPHERS) % MAXPHILOSOPHERS;
    int nextFork = philosopher;
    pthread_mutex_unlock(&forks[nextFork]);
    pthread_mutex_unlock(&forks[prevFork]);
    printf("%d has set down forks %d and %d.\n", philosopher, prevFork, nextFork);
}


void *add_philosopher(void *n)
{
    unsigned int tid = pthread_self();
    int name = *((int *) n);
    free(n);
    printf("'I think, therefor I am!' - Philosopher %d.\n", name);
    // Just keep eating
    while(1){
        think(name);
        get_forks(name);
        eat(name);
        put_forks(name);
    }
}


int main(int argc, char **argv)
{
    // Create the philosophers
    pthread_t threads[MAXPHILOSOPHERS];

    printf("CS444 Homework 2: Dining Problem\n");
    for(int i=0; i<MAXPHILOSOPHERS; i++){
        int *arg = malloc(sizeof(*arg));
        *arg = i;
        pthread_create(&threads[i], NULL, add_philosopher, arg);
    }

    // Wait for all threads to finish
    for(int i=0; i<MAXPHILOSOPHERS; i++){
    		if(pthread_join(threads[i], NULL)){
    		fprintf(stderr, "Error absorbing philosopher.\n");
    		return 2;
      	}
    }
	  return 0;
}
