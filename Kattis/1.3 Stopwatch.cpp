#include<iostream>
int main()
{
	int x,count=0;std::cin>>x;int a[x];
	if (x%2!=0){
		std::cout<<"still running";
	}
	else{
		for(int i=0;i<x;i++)
			std::cin>>a[i];
		for(int i=0,j=1;i<x&&j<x;i+=2,j+=2)
		{
			count+=a[j]-a[i];
		}
			std::cout<<count;
	}	
}
