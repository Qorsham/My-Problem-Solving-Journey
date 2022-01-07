#include<iostream>
#include<set>
int main() 
{
	int a[4];std::set<int> set;
	for(int i=0;i<4;i++)
	{
		std::cin>>a[i];
		set.insert(a[i]);
	}
	std::cout<<(4-set.size());
}
