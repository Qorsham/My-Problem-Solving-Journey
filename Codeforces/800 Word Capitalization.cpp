#include<iostream>
int main() 
{
	std::string str;std::cin>>str;
	int c = str[0];
	if(c>96)
		str[0]-=32;
	std::cout<<str;
}		
