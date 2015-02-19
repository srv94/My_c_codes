/*
 ============================================================================
 Name        : time0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void shuffle (int a[26])
{
	int steps = 10000;
	while(steps>0)
	{

		int i = rand()%26;
		int j = rand()%26;

		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;

		steps--;

	}





}

int main(void) {

	srand (time(NULL));

	FILE *f;
	f= fopen("master.txt","w");

	int sherrif[26];
	int map[26];

	int plain[26];
	int key1 [26];
	int key2 [26];

	int i;
	for(i=0;i<26;i++){

		sherrif[i]=i;


		plain[i] = i;
		key1[i]=i;
		key2[i]=i;
	}
	shuffle(sherrif);

	for(i=0;i<26;i++)
	{
		int burms = sherrif[i];

		map[burms] = i;

	}



	int table[26][26];

	int j;

	for(i=0;i<26;i++)
		for(j=0;j<26;j++)
			table[i][j] = (i+j)%26;

	for(i=0;i<26;i++){
			for(j=0;j<26;j++)

				printf("%c ", (char)(map[table[i][j]]+65));

	printf("\n");}





	for(i=0;i<26;i++)
	{
		printf("%d %d %d\n",plain[i],key1[i],key2[i]);
	}


	return EXIT_SUCCESS;
}
