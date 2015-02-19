//============================================================================
// Name        : Piece.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int q,track[26];
	cin>>q;
	while(q--){
		cin>>str;
		int ans=0;
		for(int i=0;i<26;i++) track[i]=0;
		for(int i=0;i<str.length();i<i++) track[str.at(i)-97]++;
		//for(int i=0;i<26;i++) cout<<track[i]<<" ";
		for(int i=0;i<26;i++){
			int sum=0;
			for(int j=0;j<26;j++){
					if(j==i) continue;

					sum=sum+track[j];
			}
			if(track[i]==sum){
				ans=1;
				break;
			}

		}
		if(ans==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;
}
