#include<iostream>
int main() 
{
	int n,r=0;std::cin>>n;std::string a[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
		if(a[i][1]=='+')
			r++;
		else r--;
	}
	std::cout<<r;
}
