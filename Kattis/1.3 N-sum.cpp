#include<iostream>
int main() 
{
	int x,in,sum=0;std::cin>>x;
	for(int i=0;i<x;i++)
	{
		std::cin>>in;
		sum+=in;
	}
	std::cout<<sum;
}
