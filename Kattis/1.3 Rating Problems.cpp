#include<iostream>
int main() 
{
	int x,y,in,c=0;std::cin>>x>>y;
	for(int i=0;i<y;i++)
	{
		std::cin>>in;
		c+=in;
	}
	float min = (((x-y)*-3)+c)/(float)x;
	float max = (((x-y)*3)+c)/(float)x;
	std::cout<<min<<" "<<max;
}		
