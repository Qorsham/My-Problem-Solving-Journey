#include<iostream>
int main() 
{
	int n,c=0;std::cin>>n;int a[n];
	for(int i=0;i<n;i++)std::cin>>a[i];int max=a[0],min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			c++;
		}
		else if(a[i]<min)
		{
			min = a[i];
			c++;
		}
	}
	std::cout<<c;
}
