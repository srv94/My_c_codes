/*
 ============================================================================
 Name        : One.c
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
		int n,i,temp1,temp2,j,ans=0,k,temp3,check,l;
		scanf("%d",&n);
		int track[2001];
		for(i=0;i<=2000;i++){
			track[i]=0;
		}
		for(i=0;i<n;i++){
			check=0;
			scanf("%d",&temp1);
			scanf("%d",&temp2);
			for(j=temp1;j<=temp2;j++){
				if(track[j]!=0){
					check=1;
					temp3=track[j];
					for(k=j;k<=temp2;k++){
						if(track[k]!=temp3) break;
					}
					l=1;
					while(l<=2001){
						if(track[l]==temp3) track[l]=0;
						l++;
					}
					for(;j<=k-1;j++){
						track[j]=temp3;
					}
					break;
				}
			}
			if(check==0){
				ans++;
				for(j=temp1;j<=temp2;j++) track[j]=ans;
			}
			for(j=0;j<=30;j++) printf("%d=%d ",j,track[j]);
			printf("\n");
		}
		printf("%d\n",ans);
	}
}
/*

20 40
15 25
5 10
7 20
 y y   y   y
 */
