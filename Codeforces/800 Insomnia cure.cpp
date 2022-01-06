#include<iostream>
#include<set>
int main() 
{
	int a,b,c,d,e,f=0;
	std::set<int> s;
	std::cin>>a>>b>>c>>d>>e;
	for(int i=1;i<=e;i++)
	{
		if(i%a==0)
			s.insert(i);
		else if(i%b==0)
			s.insert(i);
		else if(i%c==0)
			s.insert(i);
		else if (i%d==0)
			s.insert(i);
	}
	std::cout<<s.size();
}
