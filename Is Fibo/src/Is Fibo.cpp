//============================================================================
// Name        : Is.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;
//function for check square
bool isSquare(long long int x){
	long long int s=sqrt(x);
	return (s*s==x);
}

bool isFibonacci(long long int n)
{
	// n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
	// is a perferct square
	return isSquare(5*n*n + 4) ||
			isSquare(5*n*n - 4);
}

int main() {
	int t;
	long long int n;
	cin>>t;
	while(t--){
		cin>>n;
		if(isFibonacci(n)) cout<<"IsFibo"<<endl;
		else cout<<"IsNotFibo"<<endl;
	}

	return 0;
}
