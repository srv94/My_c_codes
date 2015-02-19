/*
 ============================================================================
 Name        : linklists.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node_t;

void printList(node_t *head){
	node_t *current = head;
	while(current!=NULL){
		printf("%d\n",current->data);
		current=current->next;
	}
}

void push(node_t *head,int val){
	node_t *current=head;
	while(current!=null){
		current=current->next;
	}
	current->next=malloc(sizeof(node_t));
	current->next->data=val;
	current->next->next=NULL;
}

int main(void) {

	return EXIT_SUCCESS;
}
