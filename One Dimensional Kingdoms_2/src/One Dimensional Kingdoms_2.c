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

int readint()
{
	int cc = getc(stdin);
	for (;cc < '0' || cc > '9';)  cc = getc(stdin);
	int ret = 0;
	for (;cc >= '0' && cc <= '9';)
	{
		ret = ret * 10 + cc - '0';
		cc = getc(stdin);
	}
	return ret;
}

int main(void) {
	int t;
	t=readint();
	while(t--){
		int l,r,n,i,j;
		n=readint();
		int track[n+1][2],ans=0;
		for(i=0;i<n+1;i++){
			track[i][0]=-1;
			track[i][1]=-1;
		}
		for(i=0;i<n;i++){
			l=readint();
			r=readint();
			int temp=0;
			for(j=1;j<=ans;j++){
				if ((track[j][0]<=l && l<=track[j][1]) || (track[j][0]<=r && r<=track[j][1])){
					temp=j;
					break;
				}
			}
			if(temp!=0){
				if(track[temp][0]<=l && l<=track[temp][1]) track[temp][0]=l;
				if(track[temp][0]<=r && r<=track[temp][1]) track[temp][1]=r;
			}
			else{
				ans++;
				track[ans][0]=l;
				track[ans][1]=r;
			}
			//for(j=1;j<=ans;j++) printf("%d= %d %d\n",j,track[j][0],track[j][1]);
		}
		printf("%d\n",ans);

	}
}
