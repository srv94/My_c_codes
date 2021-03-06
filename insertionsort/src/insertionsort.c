/*
 ============================================================================
 Name        : insertionsort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *array,int n){
	int value,hole;

	for(int i=1;i<n;i++){
		value=array[i];
		hole=i;
		while(hole>0 && array[hole-1]>value){
			array[hole]=array[hole-1];
			hole--;
		}
		array[hole]=value;
	}

}


int main(void) {
	int a[10]={6,2,4,5,8,9,7,3,1,0};
	insertionsort(a,10);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
