/*
 ============================================================================
 Name        : Let.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long long int total(long long int n){
	return (n*(n+1))/2;
}

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n,s,i;
		scanf("%lld",&n);
		scanf("%lld",&s);
		long long sum=total(n);
		if(sum==s) printf("0\n");
		else{
			for(i=n-1;i>0;i--){
				s=s+i;
				if(s>=sum){
					printf("%lld\n",n-i);
					break;
				}
			}
		}

	}
}
