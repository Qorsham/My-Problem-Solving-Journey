#include<iostream>
int main() 
{
	int n,t,sum=0,w=0;std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>t;
		sum+=t;
	}
	for(int i=1;i<=5;i++)
	{
		if((sum+i)%(n+1)!=1)
		{
			w++;
		}
	}
	std::cout<<w;
}
