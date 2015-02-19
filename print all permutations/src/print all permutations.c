/*
 ============================================================================
 Name        : C program to print all permutations of a given string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to print all permutations of a given string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//swip 2 char using pointer
void swap(char *x ,char *y ){
	char c;
	c=*x;
	*x=*y;
	*y=c;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */

void permute(char *a,int i,int n){
	int j;
	if(i==n){
		printf("%s\n",a);
	}
	else{
		for(j=i;j<=n;j++){
			swap(a+i,a+j);
			permute(a,i+1,n);
			swap(a+i,a+j);
		}
	}
}

int main(void) {
	char a[] = "123456789";
	permute(a, 0, 8);
	return EXIT_SUCCESS;
}
