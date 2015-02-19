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

	int key[26];
	int keyy[26];

	int i;
	for(i=0;i<26;i++){
key[i]=i;
keyy[i]=i;
	}

	shuffle(key);
//	shuffle(keyy);



	int table[26][26];

	int j;

	for(i=0;i<26;i++)
		for(j=0;j<26;j++)
			table[i][j] = (key[i]+keyy[j])%26;


	//for(i=0;i<26;i++)
		//	for(j=0;j<26;j++)
			//	table[i][j] = (table[i][j]+key[i]+keyy[j])%26;


	for(i=0;i<26;i++){
			for(j=0;j<26;j++)

				printf("%c ", (char)(table[i][j]+65));

	printf("\n");}





	return EXIT_SUCCESS;
}
