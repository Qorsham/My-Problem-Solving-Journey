#include<iostream>
int main() 
{
	int x;std::string str;std::cin>>x>>str;int c=0;
	for(int i=0;i<x;i++)
		if(str[i]==str[i+1])
			c++;
	std::cout<<c;
}		
