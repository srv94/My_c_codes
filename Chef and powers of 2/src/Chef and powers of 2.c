/*
 ============================================================================
 Name        : Chef.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ans[1000],i,a=0;
	int number,temp1,temp2,n;
	scanf("%d",&number);
	while(number!=0){
		temp1=number;
		temp2=number;
		n=0;
		while(temp2!=1){

			temp1=temp1%2;
			temp2=temp2/2;
			n++;
		}
		number=number-2*n;
		ans[a]=n*2;
		//printf("%d ",ans[a]);
		a++;
	}
	for(i=a-1;i>=0;i--) printf("%d ",ans[i]);
}
