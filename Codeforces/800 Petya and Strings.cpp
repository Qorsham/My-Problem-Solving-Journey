#include<iostream>
#include <algorithm>
int main() 
{
	std::string str1,str2;std::cin>>str1>>str2;int c1=0,c2=0;
    std::transform(str1.begin(), str1.end(),str1.begin(), ::toupper);
    std::transform(str2.begin(), str2.end(),str2.begin(), ::toupper);
    if(str1>str2)
    	std::cout<<"1";
    else if(str1<str2)
    	std::cout<<"-1";
    else std::cout<<"0";
}
