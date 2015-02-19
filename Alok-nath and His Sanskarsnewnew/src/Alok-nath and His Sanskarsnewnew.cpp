//============================================================================
// Name        : Alok-nath.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

void subset_sum_recursive(std::list<int> numbers, int target, std::list<int> partial)
{
	int s = 0;
	for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
	{
		s += *cit;
	}
	if(s == target)
	{
		std::cout << "sum([";

		for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
		{
			std::cout << *cit << ",";
		}
		std::cout << "])=" << target << std::endl;
	}
	if(s >= target)
		return;
	int n;
	for (std::list<int>::const_iterator ai = numbers.begin(); ai != numbers.end(); ai++)
	{
		n = *ai;
		std::list<int> remaining;
		for(std::list<int>::const_iterator aj = ai; aj != numbers.end(); aj++)
		{
			if(aj == ai)continue;
			remaining.push_back(*aj);
		}
		std::list<int> partial_rec=partial;
		partial_rec.push_back(n);
		subset_sum_recursive(remaining,target,partial_rec);

	}
}

void subset_sum(std::list<int> numbers,int target)
{
	subset_sum_recursive(numbers,target,std::list<int>());
}
int main()
{
	int t,n,k,temp;
	long long int sum;
	cin>>t;
	while(t--){
		std::list<int> a;
		cin>>n>>k;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum=sum+temp;
			a.push_back (temp);
		}
		if(1){
			sum=sum/k;
			subset_sum(a, sum);
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}

