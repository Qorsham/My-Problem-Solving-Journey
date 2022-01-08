#include<iostream>
int main() 
{
	std::string str;std::cin>>str;
	char l = str[str.size()-1];
	str.erase( str.end()-1 );
	int xx = str.size()-1;
	for(int i=0;i<xx;i++)
		str.push_back('e');
	str.push_back(l);
	std::cout<<str;
}
