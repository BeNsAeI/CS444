/*
OSU - CS444
Concurrency 3 - Mutual Exclusion
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

pthread_mutex_t iLock;
pthread_mutex_t dLock;
pthread_mutex_t sLock;

typedef struct node{
	int data;
	struct node *next;
}node_t;

int search(node_t *head, int searchTerm)
{
	int status = 0;
	pthread_mutex_lock(&sLock);	
	// Returns true if searchTerm is in the linked list, otherwise false
	node_t * current = head->next;
	while(current != NULL){
		if(current->data == searchTerm){
		    status = 1;
		    break; // out of while loop
		}
		current = current->next;
	}
	pthread_mutex_unlock(&sLock);
	return status;
}

void insert(node_t *head, int data)
{
	// Adds a new node to the end of the linked list
	pthread_mutex_lock(&iLock);
	node_t * current = head;
	// Walk to the end of the list
	while(current->next != NULL){
		current = current->next;
	}
	current->next = malloc(sizeof(node_t));
	current->next->data = data;
	current->next->next = NULL;
	pthread_mutex_unlock(&iLock);
	return;
}

int delete(node_t *head, int delTerm)
{
	// Deletes a node from the linked list and returns it, or null if not present
	pthread_mutex_lock(&dLock);
	pthread_mutex_lock(&iLock);
	pthread_mutex_lock(&sLock);
	node_t * prevNode = head->next;
	node_t * nextNode;
	int status = 0;
	if(prevNode){
		nextNode = prevNode->next;
		while(nextNode && nextNode->next){
			if(nextNode->data != delTerm){
				prevNode = nextNode;
				nextNode = nextNode->next;
			}else{
				// Remove this element by connecting previous to next
				prevNode->next = nextNode->next;
				status = 1;
				break; // out of while loop
			}
		}
	}
	// We either found and deleted a node, or it didn't exist (and is still NULL)
	pthread_mutex_unlock(&sLock);
	pthread_mutex_unlock(&iLock);
	pthread_mutex_unlock(&dLock);
	return status;
}

void *add_searcher(void *head_ref)
{
	node_t * head = (node_t *)head_ref;
	unsigned int tid = pthread_self();
	printf("Creating a new SEARCH thread with tid %d.\n", tid);
	for(int i=1; i<=3; i++){
		int num = rand() % 5;
		int result = search(head, num);
		printf("(%d)\t%d was %sfound\n", tid, num, (result==1)?"":"not ");
		sleep(1);
	}
}


void *add_inserter(void* head_ref)
{
	node_t * head = (node_t *)head_ref;
	unsigned int tid = pthread_self();
	printf("Creating a new INSERT thread with tid %d.\n", tid);
	for(int i=1; i<=3; i++){
		int num = rand() % 5;
		insert(head, num);
		printf("(%d)\t%d was added\n", tid, num);
		sleep(1);
	}
}

void *add_deleter(void *head_ref)
{
	node_t * head = (node_t *)head_ref;
	unsigned int tid = pthread_self();
	printf("Creating a new DELETE thread with tid %d.\n", tid);
	for(int i=1; i<=3; i++){
		int num = rand() % 5;
		int result = delete(head, num);
		printf("(%d)\t%d was %sdeleted\n", tid, num, (result==1)?"":"not ");
		sleep(1);
	}
}

void print_list(struct node * head)
{
	struct node * current = head->next;
	printf("Printing the list:\n");
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
}

int main(int argc, char **argv)
{
	printf("CS444 Group 10-03, Homework 3: Mutual Exclusion Problem:\n");
	if(argc <= 3){
		printf("argc was %d.\n", argc);
		printf("Usage is: .mutualExclusion <#searchers> <#inserters> <#deleters>\n");
		return 1;
	}

	time_t t;
	srand((unsigned) time(&t));

	int numSearchers = atol(argv[1]);
	int numInserters = atol(argv[2]);
	int numDeleters  = atol(argv[3]);

	pthread_t threads[numSearchers + numInserters + numDeleters];

	// node_t *root = malloc(sizeof(struct node));
	node_t *root = calloc(1, sizeof(struct node));
	root->data = 0;
	root->next = NULL;

	int i = 0;
	for(; i<numSearchers; i++)
		pthread_create(&threads[i], NULL, add_searcher, root);
	for(; i<(numSearchers + numInserters); i++)
		pthread_create(&threads[i], NULL, add_inserter, root);
	for(; i<(numSearchers + numInserters + numDeleters); i++)
		pthread_create(&threads[i], NULL, add_deleter, root);

	// Wait for all threads to finish
	for(int i=0; i<(numSearchers + numInserters + numDeleters); i++){
		if(pthread_join(threads[i], NULL)){
			fprintf(stderr, "Error waiting for thread..\n");
			return 2;
		}
	}
	// Display the linked list
	print_list(root);

	return 0;
}
