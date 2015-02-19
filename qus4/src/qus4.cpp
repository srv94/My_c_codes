#include <iostream>
#include<stdio.h>
using namespace std;

unsigned long long int factorials[10000001];

long long sum_of_series(unsigned long long int n,unsigned long long int m){
	unsigned long long int ans=1;
	if( n%2 == 0){
		ans=((n)/2)%m;
		ans=(ans*((n+1)%m))%m;
		ans=(ans*(n%m))%m;
	}
	else{
		ans=((n+1)/2)%m;
		ans=(ans*(n%m))%m;
		ans=(ans*(n%m))%m;
	}
	return ans;
}


int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int p[n],max=0,max_fact,ans=0;
	for(int i=0;i<n;i++){
		cin>>p[i];
		//if(p[i]>max) max=p[i];
	}
	max_fact=m;

	// long int factorials[max_fact+1];

	for(int i=0;i<10000001;i++) factorials[i]=0;

	factorials[0]=1;

	for(long long int i=1;i<max_fact+1;i++){
		factorials[i]=((factorials[i-1]%m)*(i%m))%m;
		if(factorials[i]==0){
			max_fact=i;
			break;
		}
	}


	for(long long int i=2;i<max_fact+1;i++){
		factorials[i]=((factorials[i]%m)*(i%m))%m;
		factorials[i]=(factorials[i-1]+factorials[i])%m;
	}

	for(long long int i=0;i<n;i++){
		if(p[i]>=max_fact) ans=(ans+factorials[max_fact])%m;
		else ans=(ans+factorials[p[i]])%m;
		ans=(ans+sum_of_series(p[i],m))%m;
	}
	cout<<ans<<endl;

	return 0;
}
