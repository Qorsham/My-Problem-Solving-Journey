#include<iostream>
#include<algorithm>
#include<sstream>
int main() 
{
	int x=0,y=0;std::string str1,str2;std::cin>>str1>>str2;
	std::reverse(str1.begin(), str1.end());
	std::reverse(str2.begin(), str2.end());
	std::stringstream ss1(str1);
	ss1 >> x;
	std::stringstream ss2(str2);
	ss2 >> y;
	if(x>y)
		std::cout<<x;
	else std::cout<<y;
}
