#include<iostream>
int main() 
{
	std::string str;std::cin>>str;int c=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='4')
			c++;
		if(str[i]=='7')
			c++;
	}
	if(c==7||c==4)
		std::cout<<"YES";
	else std::cout<<"NO";
}		
