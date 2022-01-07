#include<iostream>
int main() 
{
	std::string str;std::cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[i+1]&&str[i]=='s')
		{
			std::cout<<"hiss";
			return 0;
		}
	}
	std::cout<<"no hiss";
}
