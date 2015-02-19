//============================================================================
// Name        : Chef.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
		string input;
		char temp;
		int ans = 0,ans2=1, check_old,check_new,check;
		cin>>input;
		temp=input.at(0);
		if(temp == '+') check_old = 1;
		else check_old = 0;
		check=check_old;

		for(int i=1; i<input.length(); i++){
			if(input.at(i) == '+') check_new = 1 ;
			else check_new = 0;

			if (check_new == check_old){
				ans++;
				if(check_new == 1) check_old = 0;
				else check_old = 1;
			}
			else{
				if(check_old == 1) check_old = 0;
				else check_old = 1;
			}
		}
		if(check == 1) check_old = 0;
		else check_old = 1;
		for(int i=1; i<input.length(); i++){
			if(input.at(i) == '+') check_new = 1 ;
			else check_new = 0;

			if (check_new == check_old){
				ans2++;
				if(check_new == 1) check_old = 0;
				else check_old = 1;
			}
			else{
				if(check_old == 1) check_old = 0;
				else check_old = 1;
			}
		}
		if(ans2>ans) cout<<ans<<endl;
		else cout<<ans2<<endl;
	}
	return 0;
}
