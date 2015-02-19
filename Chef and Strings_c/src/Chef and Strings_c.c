/*
 ============================================================================
 Name        : Chef.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int track[4][1000001];
int lock[4][1000001];

#define gc getchar_unlocked

int get_value(char x){
	switch(x){
	case 'c':
		return 0;
		break;

	case 'h':
		return 1;
		break;

	case 'e':
		return 2;
		break;

	case 'f':
		return 3;
		break;
	}
	return 0;
}
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

char str[1000000];

int main(void) {
	int i,j,c=0,h=0,e=0,f=0,q,a,b,l,r;
	scanf("%s",&str);
	for(i=0;i<4;i++){
		for(j=0;j<1000001;j++){
			track[i][j]=0;
			lock[i][j]=-1;
		}
	}
	int length = strlen(str);
	//printf("%d",length);
	for(i=0;i<length;i++){
		switch(str[i]){

		case 'c':
			lock[0][c]=i;
			c++;
			break;

		case 'h':
			lock[1][h]=i;
			h++;
			break;

		case 'e':
			lock[2][e]=i;
			e++;
			break;

		case 'f':
			lock[3][f]=i;
			f++;
			break;
		}
		track[0][i]=c;
		track[1][i]=h;
		track[2][i]=e;
		track[3][i]=f;
	}
	int num[4];
	num[0]=c;
	num[1]=h;
	num[2]=e;
	num[3]=f;
	/*for(i=0;i<4;i++){
		for(j=0;j<length;j++){
			printf("%d ",track[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<4;i++){
		for(j=0;j<length;j++){
			printf("%d ",lock[i][j]);
		}
		printf("\n");
	}*/

	q=readint();
	while(q--){
		char x,y;
		scanf("%c",&x);
		scanf("%c",&y);
		scanf("%c",&y);
		l=readint();
		r=readint();
		a=get_value(x);
		b=get_value(y);
		l=l-1;
		r=r-1;
		//printf("%c %c %d %d",x,temp,l,r);
		//printf("%c %c j=%d",x,y,j);
		int ans=0;
		for(i=0;i<num[a];i++){
			if(l<=lock[a][i] && lock[a][i]<=r){
				ans=track[b][r]-track[b][lock[a][i]]+ans;
			}
			//printf("%d\n",lock[a][i]);
		}
		printf("%d\n",ans);

	}
	return EXIT_SUCCESS;
}
//c f 9 9
