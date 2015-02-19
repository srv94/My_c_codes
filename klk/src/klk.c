/*
 ============================================================================
 Name        : klk.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include<time.h>

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a=9,b=7;
	swap(a`,b);
	printf("a=%d b=%d",a,b);
}


