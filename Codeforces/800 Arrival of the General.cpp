#include<iostream>
int main() 
{
	int n,max=0,maxx,minx,min=100;std::cin>>n;int a[n];
	for(int i=0;i<n;i++)std::cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]<=min)
		{
			min=a[i];
			minx=i;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]>=max)
		{
			max=a[i];
			maxx=i;
		}
	}
	if(maxx<minx)
		std::cout<<maxx+n-1-minx;
	else std::cout<<(maxx+ n-1-minx)-1;	
}
