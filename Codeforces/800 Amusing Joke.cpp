#include<iostream>
#include<algorithm>
int main() 
{
	std::string str1,str2,str;std::cin>>str1>>str2>>str;
	str1 = str1+str2;
	std::sort(str1.begin(), str1.end());
	std::sort(str.begin(),str.end());
	if(str1==str)
		std::cout<<"YES";
	else std::cout<<"NO";
}
