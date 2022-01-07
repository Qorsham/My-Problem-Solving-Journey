#include<iostream>
#include<sstream>  
int main() 
{
	int x;std::cin>>x;std::string str;
	for(int i=0;i<x;i++)
	{
		std::cin>>str;
		if(str.size()>10)
		{
			std::stringstream ss;  
			int sizein = str.size()-2;
			ss<<sizein;
			std::string s;
			ss>>s;
			std::cout<<str[0]<<s<<str[str.size()-1]<<std::endl;
		}
		else std::cout<<str<<std::endl;
	}
}
