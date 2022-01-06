#include<iostream>
int main() 
{
	int n,x,y;std::cin>>n>>x>>y;int a1,a2,a3,a4;
	a1 = x*y; a2 = (n-x)*y;
	a3 = x*(n-y); a4 = (n-x)*(n-y);
	if(a1>=a2&&a1>=a3&&a1>=a4)
		std::cout<<a1*4;
	else if(a2>=a1&&a2>=a3&&a2>=a4)
		std::cout<<a2*4;
	else if(a3>=a1&&a3>=a2&&a3>=a4)
		std::cout<<a3*4;
	else if(a4>=a1&&a4>=a2&&a4>=a3)
	 	std::cout<<a4*4;	
}
