#include<iostream>
int main()
{
	int n,t=0;std::cin>>n;int x[n],y[n];
	for(int i=0;i<n;i++)
		std::cin>>x[i]>>y[i];
	for(int i=0;i<n;i++)
	{
		bool a=0,b=0,c=0,d=0;
		for(int j=0;j<n;j++)
		{
            if(x[j]>x[i]&&y[j]==y[i])
				a = 1;
            if(x[j]<x[i]&&y[j]==y[i])
				b = 1;
            if(x[j]==x[i]&&y[j]>y[i])
				c = 1;
            if(x[j]==x[i]&&y[j]<y[i])
				d = 1;
		}
		if (a && b && c && d) t++;
	}
	std::cout<<t;
}
