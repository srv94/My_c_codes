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
typedef enum { false, true } bool;

int check(int n,int i,int j,int king[n][2],int link[n]){
	if(i<=j) return -1;
	if((king[j][0]<=king[i][0] && king[i][0]<=king[j][1]) || (king[j][0]<=king[i][1] && king[i][1]<=king[j][1])){
		//printf("%d %d %d %d",king[j][0],king[j][1],king[i][0],king[i][1]);
		if(link[j]==-1) {
			//printf("check\n");
			return j;
		}//8 4	  %%%%%%%%  12 5
		else{
			//printf("link %d=%d\n",j,link[j]);
			return check(n,i,link[j],king,link);
		}
	}
	else{
		printf("test 2\n");
		j=j+1;
		return check(n,i,j,king,link);
	}
}
//n=5 i=1;j=0
int ans;
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,temp;
		scanf("%d",&n);
		int king[n][2],link[n];
		ans=0;

		for(i=0;i<n;i++) link[i]=-1;

		for(i=0;i<n;i++){
			//printf("input %d\n",i);
			scanf("%d",&king[i][0]);
			scanf("%d",&king[i][1]);
			ans++;
			temp=check(n,i,0,king,link);
			//printf("test\n");
			if(temp!=-1){
				link[temp]=i;
				link[ ]
				printf("%d link to %d \n",i,temp);
			}
		}
		printf("%d\n",ans);
	}
}

