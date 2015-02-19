//============================================================================
// Name        : Is.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n,fibo=0,first = 0, second = 1,c=0;
		bool ans=false;
		cin>>n;
		while(fibo<n){
			if ( c <= 1 )
				fibo = c;
			else
			{
				fibo = first + second;
				first = second;
				second = fibo;
			}
			if(fibo==n) ans=true;
			//cout<<fibo<<endl;
			c++;
		}
		if(ans==true) cout<<"IsFibo"<<endl;
		else cout<<"IsNotFibo"<<endl;
	}
	return 0;
}
