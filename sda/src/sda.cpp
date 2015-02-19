//============================================================================
// Name        : sda.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int last2=1,last=0,first=0;
	for(int i=0;i<33;i++){
		if(i<18){
			first=last2+last;
			last2=last;
			last=first;
			cout<<first<<endl;
		}
		else{
			first=last-last2;
			last=last2;
			last2=first;
			cout<<first<<endl;


		}

	}
	return 0;
}
