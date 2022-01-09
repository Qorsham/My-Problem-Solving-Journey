#include<iostream>
int main() 
{
	long long int o,e,x;std::cin>>x;
	e = x/2;o=x/2;
	if(x%2!=0)o++;
	long long int n,tt;std::cin>>n;
	if(n<=o)
		tt=(n*2)-1;
	else
		tt=(n-o)*2;
	std::cout<<tt;
}
