#include <iostream>
int main() 
{
  std::string str,out;std::cin>>str;
  for(int i=0;i<str.size();i++)
  {
    if(str[i]=='.')
    {
      out.push_back('0');
    }
    else if(str[i]=='-'&&str[i+1]=='.'){
    	out.push_back('1');
    	i++;
	}
	else if(str[i]=='-'&&str[i+1]=='-'){
    	out.push_back('2');
    	i++;
  	}
  }
  std::cout<<out;
}
