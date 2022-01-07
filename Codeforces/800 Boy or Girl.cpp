#include<iostream>
#include<set>
int main() 
{
	std::set<char> set;
	std::string str;std::cin>>str;
	for(int i=0;i<str.size();i++)
		set.insert(str[i]);
	(set.size()%2==0)?std::cout<<"CHAT WITH HER!" : std::cout<<"IGNORE HIM!";
}
