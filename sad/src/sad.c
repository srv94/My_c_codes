/*
 ============================================================================
 Name        : Dynamic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int max_so_far = a[0], max_ending_here = 0;
		int max_so_far1 = a[0], max_ending_here1 = 0;
		int i;
		for(i = 0; i < n; i++)
		{
			max_ending_here = max_ending_here + a[i];
			if(a[i]>0){
				max_so_far1 = 0;
				max_ending_here1 = max_ending_here1 + a[i];
			}
			if(max_so_far < max_ending_here){
							max_so_far = max_ending_here;
							//max_so_far1 = max_ending_here1;
						}
			if(max_ending_here < 0){
				max_ending_here = 0;
				//max_ending_here1 = 0;
			}
		}
		max_so_far1 = max_so_far1 + max_ending_here1 ;
		printf("%d %d\n", max_so_far,max_so_far1);
	}
	return 0;
}
