#include<iostream>
#include<cmath>
int main()
{
	int x,y,z;std::cin>>x>>y>>z;
	std::cout<<(std::sqrt((x*y)/z)+std::sqrt((x*z)/y)+std::sqrt((y*z)/x))*4;
}
