/*
 ============================================================================
 Name        : new_stack.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct arrayStack{
	int top;
	int capacity;
	int *array;
};

struct arrayStack *createstack(int a){
	struct arrayStack *s = malloc(sizeof(struct arrayStack));
	if(!s) return NULL;
	s->capacity=a;
	s->array=malloc(s->capacity*sizeof(int));
	if(!s->array) return NULL;
	return s;
}

int isEmptyStack(struct arrayStack *s){
	return (s->top==-1);
}

int isFullStack(struct arrayStack *s){
	return (s->top==s->capacity);
}

void push(struct arrayStack s,int data){
	if(isFullStack(s))
		prinf("Stack Overflow");
	else
		s->array[++s->top]=data;
}

int pop(struct arrayStack *s){
	if(isEmptyStack(s)){
		printf("Stack Empty");
		return 0;
	}
	else

}

int main(void) {
	return EXIT_SUCCESS;
}
