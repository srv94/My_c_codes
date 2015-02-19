//============================================================================
// Name        : Archery.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

double dis(double x,double y){
	return sqrt(x*x+y*y);
}

int main() {
	int t,n,ans=0,swap=0,p1,p2;
	cin>>t;
	double rad[t],x1,y1,x2,y2,dis1,dis2;
	for(int i=0;i<t;i++){
		cin>>rad[i];
	}
	for (int c = 0 ; c < ( t - 1 ); c++)
	{
		for (int d = 0 ; d < t - c - 1; d++)
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
	cin>>n;
	while(n--){
		p1=p2=t;
		cin>>x1>>y1>>x2>>y2;
		dis1=dis(x1,y1);
		dis2=dis(x2,y2);
		for(int i=0;i<t;i++){
			if(dis1<rad[i]){
				p1=i;
				//cout<<i<<" ";
				break;
			}
		}
		for(int i=0;i<t;i++){
			if(dis2<rad[i]){
				p2=i;
				//cout<<i<<" "<<endl;
				break;
			}
		}
		if(p1==p2) continue;
		ans=ans+abs(p1-p2);
	}
	cout<<ans;
	return 0;
}
