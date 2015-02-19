//============================================================================
// Name : Chef.cpp
// Author :
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
using namespace std;

unsigned long long int factorials[10000001];

long long sum_of_series(unsigned long long int n,unsigned long long int m){
	unsigned long long int ans=1;
	if( n%2 == 0){
		ans=((n)/2)%m;
		ans=(ans*((n+1)%m))%m;
		ans=(ans*n%m)%m;
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
	unsigned long long int n,m;
	cin>>n>>m;
	unsigned long long int p[n],max=0,max_fact,ans=0;
	for(int i=0;i<n;i++){
		cin>>p[i];
		if(p[i]>max) max=p[i];
	}

	if(m>max) max_fact=max;
	else max_fact=m;

	//unsigned long long int factorials[max_fact+1];
	//unsigned int *factorials = (unsigned int*) calloc (max_fact,sizeof(unsigned int));

	for(int i=0;i<10000001;i++) factorials[i]=0;
	//cout<<"Max: "<<max<<endl;
	//cout<<"Max_Fact: "<<max_fact<<endl;
	factorials[0]=1;

	for(unsigned long long int i=1;i<max_fact+1; i++){
		factorials[i]=((factorials[i-1]%m)*(i%m))%m;
		/*if(factorials[i] == 0){
max_fact=i;
break;
}*/
	}
	//for(int i=1;i<=max_fact;i++) cout<<"fact i="<<i<<"ans ="<<factorials[i]<<endl;
	for(unsigned long long int i=2;i<max_fact+1;i++){
		factorials[i]=((factorials[i]%m)*(i%m))%m;
		factorials[i]=((factorials[i-1]%m)+(factorials[i]%m))%m;
	}
	//for(int i=1;i<=max_fact;i++) cout<<"fact i="<<i<<"ans ="<<factorials[i]<<endl;
	for(unsigned long long int i=0;i<n;i++){
		if(p[i]<=max_fact) ans=(ans+factorials[p[i]])%m;
		else ans=(ans+factorials[max_fact])%m;
		//cout<<"ans:1: "<<ans<<endl;
		ans=(ans+sum_of_series(p[i],m))%m;
		//cout<<"ans:2:"<<ans<<endl<<endl;
	}
	cout<<ans<<endl;

	return 0;
}
