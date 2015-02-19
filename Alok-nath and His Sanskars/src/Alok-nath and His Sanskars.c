/*
 ============================================================================
 Name        : Alok-nath.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ====================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
	int t,n,k,i,c,d;
	long long int sanskar[21],swap=0,sum;
	scanf("%d",&t);
	while (t--) {
		for (i=0; i<21; i++) {
			sanskar[i]=0;
		}
		sum=0;
		scanf("%d%d",&n,&k);
		for (i=0; i<n; i++) {
			scanf("%lld",&sanskar[i]);
			sum=sum+(sanskar[i]);
		}
		if (sum%k==0) {
			for (c = 0 ; c < ( n - 1 ); c++)
			{
				for (d = 0 ; d < n - c - 1; d++)
				{
					if (sanskar[d] > sanskar[d+1]) /* For decreasing order use < */
							{
						swap       = sanskar[d];
						sanskar[d]   = sanskar[d+1];
						sanskar[d+1] = swap;
							}
				}
			}
			sum=sum/k;
			for (c=0; c<k; c++) {
				swap=0;
				// printf("aaaa0\n");
				for (i=n-1; i>=0; i--) {
					if (sanskar[i]==0) {
						continue;
					}
					if (swap < sum) {
						swap=swap+sanskar[i];
						if (swap>sum) {
							swap=swap-sanskar[i];
						}
						else{
							sanskar[i]=0;
							if (swap==sum) {
								break;
							}
						}
					}
				}
				if (swap!=sum) {
					swap=-1;
					break;
				}
			}

			if (swap==-1) {
				printf("no\n");
			}
			else printf("yes\n");

		}

		else printf("no\n");
		//for (i=0; i<n; i++) { printf("%lld ",sanskar[i]);}
	}
	return 0;
}
