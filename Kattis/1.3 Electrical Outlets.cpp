#include<iostream>
int main() 
{
	int n,in,sum=0,in2;std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>in;
		for(int k=0;k<in;k++)
		{
			std::cin>>in2;
			sum+=in2;
		}
		std::cout<<sum-in+1<<std::endl;
		sum=0;
	}
}
