//============================================================================
// Name        : Chef.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int readint()
    {
       int cc = getc(stdin);
       for (;cc < '0' || cc > '9';)  cc = getc(stdin);
       int ret = 0;
       for (;cc >= '0' && cc <= '9';)
       {
          ret = ret * 10 + cc - '0';
          cc = getc(stdin);
       }
      return ret;
   }

int main() {
	int t;
	t=readint();
	while(t--){
		int n, track[100001],temp,ans=0,total=0,max=0;
		for(int i = 0; i<100001; i++){
			track[i]=0;
		}
		cin>>n;
		for(int i=0; i<n; i++){
			temp=readint();
			if(temp>max) max=temp;
			track[temp]++;
			total++;
		}
		for(int i=1; i<max+1;i++){
			if(track[i]>ans) ans=track[i];
		}
		cout<<total-ans<<endl;
	}
	return 0;
}
