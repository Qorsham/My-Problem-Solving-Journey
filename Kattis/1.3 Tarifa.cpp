#include<iostream>
int main() 
{
	int x,y,in,c;std::cin>>x>>y;c=x;
	for(int i=0;i<y;i++)
	{
		std::cin>>in;
		c+=x-in;
	}
	std::cout<<c;
}		
