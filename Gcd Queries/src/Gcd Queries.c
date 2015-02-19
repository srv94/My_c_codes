/*
 ============================================================================
 Name        : Gcd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked
typedef enum { false, true } bool;

int read_int() {
	char c = gc();
	while(c<'0' || c>'9') c = gc();
	int ret = 0;
	while(c>='0' && c<='9') {
		ret = 10 * ret + c - 48;
		c = gc();
	}
	return ret;
}

int gcd(int a,int b){
	int t;
	while(a)
	{
		t = a;
		a = b%a;
		b = t;
	}
	return b;
}
int main(void) {

	int t;
	t=read_int();
	while(t--){
		int n,q,i,j;
		n=read_int();
		q=read_int();
		int array[n+1];
		for(i=1;i<=n;i++){
			array[i]=read_int();
		}
		while(q--){
			int l,r,g;
			l=read_int();
			r=read_int();
			for(j=1;j<=n;j++){
				if(l<=j && j<=r) continue;
				else{
					g = array[j];
					break;
				}
			}
			for (i = j+1; i <=n; i++){
				if(l<=i && i<=r) continue;
				g = gcd(g, array[i]);
			}
			printf("%d\n",g);
		}
	}
}
