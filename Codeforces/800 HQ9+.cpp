#include<iostream>
int main() 
{
	std::string str;std::cin>>str;bool flag;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
		std::cout<<"NO";
	else std::cout<<"YES";
}
