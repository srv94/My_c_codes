//============================================================================
// Name        : soodverma.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double i=1,j=1,ans;
		while(1){
			ans=j*i;
			i++;
			cout<<ans<<" ";
			int c=sqrt(ans);
			if(c==j){
				j++;
				i=1;
				cout<<endl;
			}
			if(j>=11) break;
		}
	return 0;
}
