#include<iostream>
#include<algorithm>
int main() 
{
	std::string str;std::cin>>str;
	if(str.size()==1)std::cout<<str;
	else if(str.size()==3)
	{
		if(str[0]>str[2])
			std::cout<<str[2]<<'+'<<str[0];
		else std::cout<<str;
	}
	else
	{
		int n = (str.size()/2)+1;
		int a[n],b[n],j=0,count=0;
		for(int i=0;i<str.size();i+=2)
		{
			a[j]=str[i]-48;
			b[j]=str[i]-48;
			j++;
			count+=str[i]-48;
		}
		std::sort(a,a+n);int c=0;
		for(int i=0;i<n;i++)
			if(a[i]==b[i])
				c++;
		if(c==n)
			std::cout<<count;
		else
		{
			std::string out;
			for(int i=0;i<n;i++)
			{
				out.push_back((char)a[i]+48);
				if(i<n-1) out.push_back('+');
			}
			std::cout<<out;
		}
	}
}
