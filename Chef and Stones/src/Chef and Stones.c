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
	long long int t,n,k,i,temp,ans;
	scanf("%lld",&t);
	while(t--){
		ans=0;
		scanf("%lld",&n);
		scanf("%lld",&k);
		long long int time[n];
		for(i=0;i<n;i++){
			scanf("%lld",&temp);
			time[i]=k/temp;
		}
		for(i=0;i<n;i++){
			scanf("%lld",&temp);
			temp=temp*time[i];
			if(temp>ans) ans=temp;
		}
		printf("%lld\n",ans);
	}
}
