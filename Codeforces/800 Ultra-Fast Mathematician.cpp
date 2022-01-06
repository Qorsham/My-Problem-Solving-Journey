#include<iostream>
int main() 
{
	std::string str1,str2,emt;std::cin>>str1>>str2;
	for(int i=0;i<str1.size();i++){
		if(str1[i]!=str2[i])
			emt.push_back('1');
		else emt.push_back('0');
	}
	std::cout<<emt;
}
