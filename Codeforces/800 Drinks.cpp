#include<iostream>
#include <iomanip>
int main() 
{
	int x,sum=0;std::cin>>x;int a[x];
	for(int i=0;i<x;i++)
	{
		std::cin>>a[i];
		sum +=a[i];
	}
	std::cout<<std::fixed<<std::setprecision(12)<<sum/(double)x;
}
