/*
 ============================================================================
 Name        : Sereja.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i;
		scanf("%d",&n);
		int number[n],sum=0,count=0;
		for(i=0;i<n;i++){
			scanf("%d",&number[i]);
			sum=sum+number[i];
			if(number[i]==0) count++;
		}
		if(sum>=100){
			if(sum==100) printf("YES\n");
			else{
				sum=sum-100;
				sum=sum/(n-count);
				if(sum==0) printf("YES\n");
				else printf("NO\n");
			}
		}
		else{
			printf("NO\n");
		}
	}
}
