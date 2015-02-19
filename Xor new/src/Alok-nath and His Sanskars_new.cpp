#include <iostream>
#include <list>
int subset_sum_recursive(std::list<int> numbers, int target, std::list<int> partial,int k,int ans)
{
	int s = k;
	for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
	{
		s ^= *cit;
	}
	if(s >= target)
	{
		/*std::cout << "sum([";

		for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
		{
			std::cout << *cit << ",";
		}
		std::cout << "])=" << s << std::endl;*/
		if(s>ans){
			ans=s;
		}
	}

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
		ans=subset_sum_recursive(remaining,target,partial_rec,k,ans);
	}
	return ans;
}

int subset_sum(std::list<int> numbers,int target,int k)
{
	int p=subset_sum_recursive(numbers,target,std::list<int>(),k,k);
	return p;
}
int main()
{
	int t,n,k,temp;
	std::cin>>t;
	while(t--){

		std::list<int> a;
		std::cin >> n>>k;
		for(int i=0;i<n;i++){
			std::cin>>temp;
			a.push_back (temp);
		}
		std::cout<<subset_sum(a, k,k)<<std::endl;
	}
	return 0;
}
