#include<iostream>
#include<set>
int main() 
{
	int n,x;std::cin>>n;std::string in;
	for(int i=0;i<n;i++)
	{
		std::set<std::string> set;
		std::cin>>x;
		for(int j=0;j<x;j++)
		{
			std::cin>>in;
			set.insert(in);
		}
		std::cout<<set.size()<<std::endl;
	}
}
