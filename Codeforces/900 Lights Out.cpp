#include <iostream>

int main() 
{
	int a[3][3];
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			std::cin>>a[i][j];
		}
	}
	int out[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			out[i][j]=1;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			out[(i+1)][(j+1)]+=a[i][j];
			out[(i+2)][(j+1)]+=a[i][j];
			out[(i)][(j+1)]+=a[i][j];
			out[(i+1)][(j+2)]+=a[i][j];
			out[(i+1)][(j)]+=a[i][j];

		}
	}
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(out[i][j]%2==0)
				out[i][j]=0;
			else out[i][j]=1;
		}
	}
	
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			std::cout<<out[i][j];
		}
		std::cout<<std::endl;
	}

}

