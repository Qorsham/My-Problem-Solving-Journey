#include <iostream>
#include <cstdlib>
int main() 
{
	int x,y;std::cin>>x>>y;
	std::string str;std::cin>>str;
	while(y--)
	{
		for (int i=0;i<x;i++)
		{
			if(str[i]=='B'&&str[i+1]=='G'){
				str[i]='G';
				str[i+1]='B';
				i++;
			}
		}
	}
	std::cout<<str;
 
 
	
}

