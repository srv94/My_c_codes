//============================================================================
// Name        : Many.cpp
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
	int fam[100001];
	int n,temp;
	cin>>n;
	for(int i=0;i<100001;i++) fam[i]=0;
	for(int i=0;i<n;i++){
		temp=readint();
		fam[temp]=readint();
	}
	int q=readint();
	while(q--){
		char c;
		int x;
		cin>>c;
		x=readint();
		switch(c){

		case '+':
			fam[x]++;
			break;
		case '-':
			fam[x]--;
			break;

		case '?':
			long long int ans=0;
			for(int i=2;i<100001;i++){
				if(fam[i]<=0) continue;
				else{
					ans=ans+((x%i)*fam[i]);
				}
			}
			cout<<ans<<endl;
			break;
		}
	}
	return 0;
}
