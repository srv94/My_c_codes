/*
 ============================================================================
 Name        : letusc_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void swap(int * a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partion(int *array,int start, int stop){
	int pivot=array[stop];
	int pIndex=start;
	for(int i=start;i<stop;i++){
		if(array[i]<=pivot){
			swap(&array[i],&array[pIndex]);
			pIndex++;
		}
	}
	swap(&array[pIndex],&array[stop]);
	return pIndex;
}

void quicksort(int *array,int start,int stop){
	int pIndex;
	if(start<=stop){
		pIndex=partion(array,start,stop);
		quicksort(array,start,pIndex-1);
		quicksort(array,pIndex+1,stop);
	}
}




int main(void) {
	int array[10]={5,4,8,7,9,7,4,3,1,15};
	quicksort(array,0,9);
	for(int i=0;i<10;i++){
		printf("%d ",array[i]);
	}

	return EXIT_SUCCESS;
}
