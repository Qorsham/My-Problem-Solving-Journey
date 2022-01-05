#include<iostream>
int main() 
{
	int x;std::cin>>x;std::string a[x];
	for(int i=0;i<x;i++)std::cin>>a[i];
	std::cout<<std::endl;
	for(int i=0;i<=x;i++){
		if(i%2!=0)
			std::cout<<a[i-1]<<std::endl;
	}
}		
