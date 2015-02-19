//============================================================================
// Name        : sasa.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
long long int fact[10000001];
long long solve(long long int n,long long int m){
	long long int ans=1;
	if( n%2 == 0){
		ans=((n)/2)%m;
		ans=(ans*((n+1)%m))%m;
		ans=(ans*n)%m;
	}
	else{
		ans=((n+1)/2)%m;
		ans=(ans*(n%m))%m;
		ans=(ans*(n%m))%m;
	}
	return ans;
}

int main() {
	long long int n,m,max_mod=0;
	cin>>n>>m;
	long long int p1[n],p2[n];
	for(int i=0;i<n;i++){
		cin>>p1[i];
		if(p1[i]>max_mod) max_mod=p1[i]
	}
	return 0;
}
