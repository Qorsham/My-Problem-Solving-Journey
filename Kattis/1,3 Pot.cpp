#include<iostream>
#include <cmath>
#include <string>
#include <sstream>
int main() 
{
	int n,out=0;std::cin>>n;std::string str;
	for(int i=0;i<n;i++)
	{
		int x;std::cin>>str;
		std::string str1 = str.substr(0,str.size()-1);
		std::stringstream ss(str1);
		ss >> x;
		char str2 = str[str.size()-1];
		out+=pow(x,(int)str2-48);
	}
	std::cout<<out;
}
