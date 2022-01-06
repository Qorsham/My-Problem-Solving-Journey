#include<iostream>
#include <cmath>
int main() 
{
	int n,x,y;std::cin>>n>>x>>y;int a[n];int flag = sqrt(pow(x,2)+pow(y,2));
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
		if(a[i]<=flag)
			std::cout<<"DA"<<std::endl;
		else std::cout<<"NE"<<std::endl;
	}
}
