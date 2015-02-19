/*
 ============================================================================
 Name        : ads.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;

int main(void) {
	int n= 4;
	int i,j,c;
for(int a=0;a<4;a++){
	for(int i=4;i>a;i--){
		printf("4");
	}
	for(int i=0;i<a;i++){
		printf("3");
	}
	for(int i=0;i<a-1;i++){
		printf("2");
	}
	for(int i=0;i<a-2;i++){
		printf("1");
	}
	printf("\n");
}

	return 0;
}
//4444444
