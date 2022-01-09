#include<iostream>
#include<map>
int main() 
{
	//Using Maps
	std::map<long long int,long long int> map;
	int n;std::cin>>n;
	long long int x;
	for(int i=1;i<=n;i++)
	{
		std::cin>>x;
		map[x] = i;
	}
	long long int y,t,sum=0,sum1=0;std::cin>>y;
	for(int i=1;i<=y;i++)
	{a
		std::cin>>t;
		sum += map[t];
		sum1+= n-map[t]+1;
	}
	std::cout<<sum<<" "<<sum1;
	//Using Frequency Array
}
