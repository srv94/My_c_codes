//============================================================================
// Name        : Just.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	int  q,m;
	string str;
	cin>>q;
	while(q--){
		cin>>m;
		cin>>str;
		long long int track=0,number=0,number2,factor=0,num[10000],ans=1;
		for(int i=0;i<10000;i++) num[i]=1;
		for(int i=0;i<str.length();i++){
			if(str.at(i)=='*'){
				factor=0;
				if(str.at(i+1)=='*'){
						i=i+2;
						while(str.at(i)!='*'){
							number2=(number2*factor)%m+str.at(i)-48;
							number2=number2%m;
							factor=10;
							i++;
						}
						for(int j=0;j<number2;j++){
							num[track]=(num[track]*number)%m;
						}
				}
				else{
					cout<<"number: "<<number<<endl;
					num[track]=number;
					number=0;
					track++;
				}

			}
		else
			number=(number*factor)%m+str.at(i)-48;
			number=number%m;
			factor=10;
		}
		num[track]=number;
		cout<<"number: "<<number<<endl;
		track++;
		for(int i=0;i<track;i++){
			ans=(ans*num[i])%m;
		}
		cout<<ans<<endl;


	}
	return 0;
}
