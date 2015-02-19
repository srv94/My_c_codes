//============================================================================
// Name        : XOR.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int findans(int *number,int k, int n,int x,int Xor,bool *track){
	int temp,max;
	if(n==x) return k;
	//if(track[Xor]==true) return 0;
	Xor=Xor^number[x];
	//track[Xor]=true;
	max=k^Xor;
	for(int i=x;i<n;i++){
		temp=findans(number,k,n,x+1,Xor,track);
		if(temp>max) max = temp;
	}
	return max;
}

int main() {
	int t,n,k,ans;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int number[n];
		bool track[1001];

		//for(int i=0;i<1001;i++){track[i]=false;}

		for(int i=0 ;i<n;i++){
			cin>>number[i];
			//track[number[i]]=true;
		}
		ans=findans(number,k,n,0,0,track);
		cout<<ans<<endl;
	}
	return 0;
}
