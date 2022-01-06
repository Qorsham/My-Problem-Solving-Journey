#include<iostream>
int main() 
{
	int x;std::cin>>x;
	if(x%2==0)
	{
		for(int i=x;i>=1;i--)
			std::cout<<i<<" ";
	}
	else std::cout<<-1;
}
