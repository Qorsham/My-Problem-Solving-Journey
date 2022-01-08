#include<iostream>
int main() 
{
	int n;std::cin>>n;int x,y,z;
	for(int i=0;i<n;i++)
	{
		std::cin>>x>>y>>z;
		if(x>y-z)
			std::cout<<"do not advertise"<<std::endl;
		else if(x==y-z)
			std::cout<<"does not matter"<<std::endl;
		else std::cout<<"advertise"<<std::endl;
	}
}
