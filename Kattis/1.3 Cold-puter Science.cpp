#include<iostream>
int main() 
{
	int n,x=0,in;std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>in;
		if(in<0)
			x++;
	}
	std::cout<<x;
}
