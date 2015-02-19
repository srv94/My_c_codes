/*
 ============================================================================
 Name        : Archery
Archery
Archery
Archery.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

double dis(double x,double y){
	return sqrt(x*x+y*y);
}

int main(void) {
	int t,n,ans=0,swap=0,p1,p2,c,d,i;
	t=readint();
	double rad[t],x1,y1,x2,y2,dis1,dis2;
	for(i=0;i<t;i++){
		rad[i]=readint();
	}
	for (c = 0 ; c < ( t - 1 ); c++)
	{
		for (d = 0 ; d < t - c - 1; d++)
		{
			if (rad[d] > rad[d+1]) /* For decreasing order use < */
			{
				swap       = rad[d];
				rad[d]   = rad[d+1];
				rad[d+1] = swap;
			}
		}
	}

	//for(int i=0;i<t;i++){cout<<rad[i]<<" ";}

	//cout<<endl;
	n=readint();
	while(n--){
		p1=p2=t;
		x1=readint();
		y1=readint();
		x2=readint();
		y2=readint();
		dis1=dis(x1,y1);
		dis2=dis(x2,y2);
		for(i=0;i<t;i++){
			if(dis1<rad[i]){
				p1=i;
				//cout<<i<<" ";
				break;
			}
		}
		for(i=0;i<t;i++){
			if(dis2<rad[i]){
				p2=i;
				//cout<<i<<" "<<endl;
				break;
			}
		}
		if(p1==p2) continue;
		ans=ans+abs(p1-p2);
	}
	printf("%d",ans);
	return 0;
}

