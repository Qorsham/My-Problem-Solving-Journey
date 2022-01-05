#include<iostream>
int main() 
{
	int x;std::cin>>x;
	float in1,in2,out;
	for(int i=0;i<x;i++)
	{
		std::cin>>in1>>in2;
		out += in1*in2;
	}
	std::cout<<out;
}		
