//============================================================================
// Name        : ART.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++)
			cout<<"  ";

		for(int j=0;j<2*i+1;j++)
			cout<<"* ";

		cout<<endl;
	}
	return 0;
}
