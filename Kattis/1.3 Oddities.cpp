#include<iostream>
int main() 
{
	int x,in;std::cin>>x;
	for(int i=0;i<x;i++)
	{
		std::cin>>in;
		if(in%2==0)
			std::cout<<in<<" is even"<<std::endl;
		else std::cout<<in<<" is odd"<<std::endl;
	}
}
