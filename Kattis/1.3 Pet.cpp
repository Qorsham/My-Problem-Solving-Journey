#include<iostream>
#include <cmath>
int main() 
{
	int a[5][4],max=0,maxx,count;
	for(int i=0;i<5;i++)
	{
		count =0;
		for(int j=0;j<4;j++)
		{
			std::cin>>a[i][j];
			count+=a[i][j];
		}
		if(count>=max)
		{
			max = count;
			maxx = i;
		}
	}
	std::cout<<maxx+1<<" "<<max;
}
