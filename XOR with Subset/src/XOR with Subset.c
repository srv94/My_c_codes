/*
 ============================================================================
 Name        : XOR.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);

}

bool check()

int main(void) {
	int t,i,n,k,max,temp,bit;
	bool number[1001];
	scanf("%d",&t);
	while(t--){
		max=0;
		scanf("%d%d",&k,&n);
		for(i=0;i<n+1;i++){
			number[i]=false;
		}
		for(i=0;i<n;i++){
			scanf("%d",&temp);
			if(temp>max) max=temp;
			number[temp]=true;
		}
		bit=1;
		while(max!=0){
			max=max/2;
			bit++;
		}
		max=power(2,bit);
		while(max!=0){
			temp=max ^ k;


		}



	}
}
