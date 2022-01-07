#include<iostream>
int main() 
{
	int n;std::cin>>n;int a[n],x,y,max=0,t=0;
	for(int i=0;i<n;i++)
	{
		std::cin>>x>>y;
		t = t+y-x;
		if(t>max)
			max=t;
	}
	std::cout<<max;
}
