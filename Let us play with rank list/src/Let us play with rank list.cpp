//============================================================================
// Name        : Let.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

long long int total(long long int n){
	return (n*(n+1))/2;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n,s,sum,i;
		cin>>n>>s;
		sum=total(n);
		if(sum==s) printf("0\n");
		else{
			for(i=n-1;i>0;i--){
				s=s+i;
				if(s>=sum){
					printf("%lld\n",n-i);
					break;
				}
			}
		}
	}
	return 0;
}
