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

void get_hair_cut(int name){
    client_seated = 1;
    while(!barber_awake)
	printf("%04x yells at the barber to wake up and do his job!!\n", name);
	sleep(1);
    sleep(3);
}

void cut_hair(){
    printf("The barber starts cutting hair..\n");
    sleep(5);
}

void *add_barber(){
    printf("Barber on duty!\n");
    barber_awake = 1;
    while(1){
	if(client_seated){
	    if(!barber_awake){
		barber_awake = 1;
		printf("The barber wakes up!\n");
	    }
	    cut_hair();
	}else if(barber_awake){
	    printf("The barber falls asleep.\n");
	    barber_awake = 0;
	}
    }
}

void *add_customer(void *tmp){
    int tid = pthread_self();
    //int * num = (int *) tmp;
    //free(tmp);
    int num = tid;

    printf("Customer %04x just walked in to the barber shop.\n", num);
    int i;
    for(i = numChairs; i >= 0; i--){
        if(pthread_mutex_trylock(&chairs[i]) == 0){
            // Customer is now sitting in a chair
            while(i>0){
		if(pthread_mutex_trylock(&chairs[i-1]) == 0){
		    printf("\tCustomer %04x moved into chair %d.\n", num, i);
		    // Move closer to the barber (chair 0)
		    pthread_mutex_unlock(&chairs[i]);
		    i--;
		}
	    }
	    // Finally, we're in the barber's chair!
	    printf("\tCustomer %04x is sitting in the barber's chair.\n", num);
	    client_seated = 1;
	    get_hair_cut(num);
	    pthread_mutex_unlock(&chairs[0]);
	    client_seated = 0;
	    printf("Customer %04x has finished their haircut and leaves.\n", num);
	    return 0;
        }
    }
    printf("There were no chairs for customer %04x, so he leaves.\n", num);
}

int main(int argc, char **argv){
	printf("CS444 Group 10-03, Homework 4: Barbershop Problem:\n");
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
    
	// Initialize chairs
	for(i = 0; i < numChairs; i++){
		printf("Initializing chair #%d.\n", i);
		pthread_mutex_init(&chairs[i], NULL);
	}

	pthread_t barberThread;
	pthread_create(&barberThread, NULL, add_barber, NULL);

	printf("Made a barber.\n");	
	
	// Just keep adding new customers
	for(i=0; ; i++){
		printf("Creating customer %d.\n", i);
		pthread_create(&customers[i%10], NULL, add_customer, (void *) &i);
		sleep( genrand_int32() % 2 + 1); // 1-2 inclusive
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
