//============================================================================
// Name        :
#include<stdio.h>
#include<time.h>

int main()
{

srand(time(NULL));

int i;
int heads = 0;
int tails = 0;
for(i=0;i<100000;i++)

{

	int exp = rand()%2;
	if(exp==0)heads++;
	else tails ++;


}


printf("heads=%d  tails = %d",heads, tails);
return 0;
}
