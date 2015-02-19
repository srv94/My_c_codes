//============================================================================
// Name        : Chef.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define max_size 10000001
unsigned long long int factorials[max_size];

long long int sum_of(long long int n,long long int m){
	long long int ans=0;
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
	long long int n,m,ans=0;
	cin>>n>>m;
	for(int i=0;i<max_size;i++) factorials[i]=0;
	long long int p[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	factorials[0]=1;
	for(long long int i=1;i<max_size;i++){
		factorials[i]=(factorials[i-1]*i)%m;
		if(factorials[i] == 0){
			break;
		}
	}


	for(long long int i=2;i<max_size;i++){
		factorials[i]=(factorials[i]*i)%m;
		factorials[i]=(factorials[i-1]+factorials[i])%m;
	}

	for(int i=0;i<n;i++){
		if(p[i]>m) ans=(ans+factorials[m])%m;
		else ans=(ans+factorials[p[i]])%m;

		ans=(ans+sum_of(p[i],m))%m;
	}
	cout<<ans<<endl;
	return 0;
}
