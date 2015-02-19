/*
 ============================================================================
 Name        : Gregorian.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//this a new code
int calculate_days(int month, int year){
	int days;
	if(month == 2){
		if(year % 4 == 0){
			if(year % 100 == 0){
				if( year % 400 == 0) days =29;
				else days=28;
			}
			else days=29;
		}
		else days=28;
	}
	else{
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12  ) days= 31;
		else days = 30;
	}

	return days;
}

int main(void) {
	int q,m,k,j;
	printf("Enter Month : ");
	scanf("%d",&m);
	printf("Enter Year : ");
	scanf("%d",&q);
	int days = calculate_days(m,q);
	printf("Days in month %d year %d is %d .\n",m,q,days);
	if(m<=2){
		m=14-m;
		q=q-1;
	}
	k = q%100;
	j = q/100;
	q=1;
	//printf("q = %d, m = %d, k = %d, j = %d \n",q,m,k,j);
	int ans = ( q + ((13*(m+1))/5) + k + (k/4) + (j/4) + (5*j)) % 7;
	switch (ans){
	case 0:
		printf("Saturday");
		break;

	case 1:
		printf("Sunday");
		break;

	case 2:
		printf("Monday");
		break;

	case 3:
		printf("Tuesday");
		break;

	case 4:
		printf("Wednesday");
		break;

	case 5:
		printf("Thusday");
		break;

	case 6:
		printf("Friday");
		break;
	}
	return EXIT_SUCCESS;
}
