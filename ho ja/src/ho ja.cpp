//============================================================================
// Name        : ho.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
long long int fact[10000001];

long long solve(long long int n,int m){
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

	int n,m;
	cin>>n>>m;
	long long int p[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<10000001;i++) fact[i]=0;
	fact[0]=1;
	for(int i=1;i<10000001;i++){
		fact[i]=(fact[i-1]%m)*(i%m);
		fact[i]=fact[i]%m;
	}
	for(int i=2;i<10000001;i++){
		fact[i]=(fact[i]*i)%m;
		fact[i]=(fact[i]+fact[i-1])%m;
	}
	long long int ans=0;
	for(int i=0;i<n;i++){
		if(p[i]>=10000000){
			ans=(ans+fact[1000000])%m;
		}
		else{
			ans=(ans+fact[p[i]])%m;
		}
		ans=(ans+solve(p[i],m))%m;
	}
	cout<<ans<<endl;

	return 0;
}
