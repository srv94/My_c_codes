//============================================================================
// Name        : Find.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int t,value[10];
	int n,m;
	cin>>t;
	while(t--){
		int count=0,ans=0;
		cin>>n;
		m=n;
		for(int i=0;i<10;i++){
			value[i]=0;
		}
		while(n!=0){
			value[count]=n%10;
			//cout<<value[count];
			n=n/10;
			count++;
		}
		for(int i=0;i<count;i++){
			if(value[i]==0) continue;
			else{
				if((m%value[i])==0) ans++;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}
