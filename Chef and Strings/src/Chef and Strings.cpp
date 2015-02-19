//============================================================================
// Name        : Chef.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int track[4][1000001];

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
	string str;
	cin>>str;
	for(int i=0;i<4;i++){
		for(int j=0;j<1000001;j++) track[i][j]=0;
	}
	int length = str.length();
	int c=0,h=0,e=0,f=0;
	for(int i=0;i<length;i++){
		switch(str[i]){

		case 'c':
			c++;
			//track[0][i+1]=c;
			break;

		case 'h':
			//track[1][i+1]=h;
			h++;
			break;

		case 'e':
			e++;
			//track[2][i+1]=e;
			break;

		case 'f':
			f++;
			//track[3][i+1]=f;
			break;
		}
		track[0][i+1]=c;
		track[1][i+1]=h;
		track[2][i+1]=e;
		track[3][i+1]=f;
	}
	/*for(int j=0;j<4;j++){
		cout<<j<<endl;
		for(int i=1;i<length+1;i++){
			cout<<track[j][i]<<" ";
		}
		cout<<endl;
	}*/
	int q;
	int l,r,b;
	q=readint();
	while(q--){
		char x,y;
		cin>>x>>y;
		//cout<<y<<endl;
		l=readint();
		r=readint();
		switch(y){

		case 'c':
			b=0;
			//track[0][i+1]=c;
			break;

		case 'h':
			//track[1][i+1]=h;
			b=1;
			break;

		case 'e':
			b=2;
			//track[2][i+1]=e;
			break;

		case 'f':
			b=3;
			//track[3][i+1]=f;
			break;
		}
		//cout<<"sasa"<<endl;
		int ans=0;
		//cout<<"a: "<<a<<" b:"<<b<<endl;
		for(int i=l-1;i<r;i++){
			//cout<<i<<" ";
			if(str[i]== x){
				ans=track[b][r]-track[b][i+1]+ans;
				//cout<<track[b][r]<<" "<<track[b][i+1]<<endl;
				//cout<<r<<" "<<i+1<<endl;
			}
		}
		cout<<ans<<endl;
	}


	return 0;
}
