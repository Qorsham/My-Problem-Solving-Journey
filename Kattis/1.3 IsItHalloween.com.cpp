#include<iostream>
int main() 
{
	std::string str;int x;std::cin>>str>>x;
	if( (str =="OCT" &&x==31)||(str=="DEC" && x == 25))std::cout<<"yup";
	else std::cout<<"nope";
}
