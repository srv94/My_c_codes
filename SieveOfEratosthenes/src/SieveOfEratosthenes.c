/*
 ============================================================================
 Name        : SieveOfEratosthenes.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { false, true } bool;

void mark(bool *ar,int a,int n){
	int i=2,num;
	while((num=i*a)<=n){
		ar[num-1]=1;
		++i;
	}
}

void SieveOfEratosthenes(int n){

	if(n>=2){
		bool ar[n];
		memset(ar,0,sizeof(ar));
		for(int i=1;i<n;++i){
			if(ar[i]==0){
				printf("%d ",i+1);
				mark(ar,i+1,n);
			}
		}
	}
}

int main(void) {
	SieveOfEratosthenes(1000000);
	return EXIT_SUCCESS;
}
