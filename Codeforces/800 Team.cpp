#include<iostream>
int main() 
{
	int n,c=0,b=0;std::cin>>n;int a[n][3];
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			std::cin>>a[i][j];
			if(a[i][j] ==1)
			{
				c++;
			}
		}
		if(c>=2)
			b++;
		c=0;
	}
	std::cout<<b;
}
