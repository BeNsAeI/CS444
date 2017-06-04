#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include <unistd.h>
#include "mt19937ar.c"
#include "kbhit.h"
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>

#define NA 1
#define NS 3
#define DELAY 2
#define SMOKE sleep(DELAY)
#define WAIT sleep(DELAY)
#define TID (unsigned int)pthread_self()
#define true 1
#define false 0


/*
 * HW5
 * group 10-03
 * Concurrency
 * Levi Willmeth, Behnam Saeedi, Zhaoheng Wang
*/

// Global:
struct items{
	char * name;
	int id;
	int picked;
	pthread_mutex_t lock;
};
struct items item[3];
char interrupt = 'r';
// Agent:
void *add_agent(void *tmp){
	time_t t;
	srand((unsigned) time(&t));
	while(interrupt != 'q'){
		printf(ANSI_COLOR_RED"Agent is picking 2 random items for this round.\n"ANSI_COLOR_RESET);
		int itemNum1 = genrand_int32() % 3;
		int itemNum2 = itemNum1;
		while(itemNum1 == itemNum2)
			itemNum2 = genrand_int32() % 3;
		struct items * item1 = &item[itemNum1];
		item1->picked = true;
		struct items * item2 = &item[itemNum2];
		item2->picked = true;
		printf(ANSI_COLOR_RED"Agent picked" ANSI_COLOR_RESET" %s and %s.\n",item1->name, item2->name);
		printf(ANSI_COLOR_RED"Going down the rabit hole, press q to stop.\n"ANSI_COLOR_RESET);
		WAIT;
		item1->picked = false;
		item2->picked = false;
		if(kbhit())
			interrupt = readch();
	}
}
// Smoker:
void *add_smoker(void *tmp){
	printf(ANSI_COLOR_YELLOW"Smoker %x04 picking its item.\n"ANSI_COLOR_RESET,TID);
	int i = 0;
	struct items * myItem;
	while(i < NS){
		if(pthread_mutex_trylock(&(item[i].lock)) == 0)
		{
			myItem = &item[i];
			break;
		}
		i++;
	}
	printf(ANSI_COLOR_CYAN"Smoker %x04 got unlimited supply of %s.\n" ANSI_COLOR_RESET,TID,myItem->name);
	while(interrupt != 'q'){
		i = 0;
		int check = 0;
		for(i;i<3;i++){
			if(item[i].picked && item[i].id != myItem->id){
				check++;
			}
		}
		if(check == 2)
		{
			printf(ANSI_COLOR_CYAN"Smoker %x04 is"ANSI_COLOR_RESET" smoking"ANSI_COLOR_CYAN"!\n"ANSI_COLOR_RESET,TID);
			SMOKE;
		}else{
			printf(ANSI_COLOR_CYAN"Smoker %x04 is"ANSI_COLOR_RESET" waiting"ANSI_COLOR_CYAN"!\n"ANSI_COLOR_RESET,TID);
			WAIT;
		}
	}
}
int main(int argc, char ** argv)
{
	system("clear");
	printf(ANSI_COLOR_CYAN"HW5-Concurrency\nGroup 10-03\n\n"ANSI_COLOR_RESET);
	pthread_t agent;
	pthread_t smokers[3];
	item[0].id = 0;
	item[0].name = "Tabaco";
	item[1].id = 1;
	item[1].name = "Paper";
	item[2].id = 2;
	item[2].name = "Match";
	init_keyboard();
	int i = NA;
	pthread_create(&agent, NULL, add_agent, (void *) &i);
	printf(ANSI_COLOR_RED"An agent joined the Matrix.\n"ANSI_COLOR_RESET);
	i = 0;
	for(i; i < NS; i++)
	{
		pthread_create(&smokers[i], NULL, add_smoker, (void *) &i);
		printf(ANSI_COLOR_YELLOW"Smoker %d entered the matrix!\n"ANSI_COLOR_RESET, i+1);
	}
	i = 0;
	for(i; i < NS; i++)
	{
		if(pthread_join(smokers[i], NULL)){
			fprintf(stderr, ANSI_COLOR_RED"Error waiting for thread.\n"ANSI_COLOR_RESET);
			exit(-1);
		}
	}
	close_keyboard();
	return 0;
}
