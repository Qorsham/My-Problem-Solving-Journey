#include<iostream>
bool isprime(int num)
{
	for(int i=num-1;i>=2;i-- )
		if(num%i==0)
			return false;
	return true;
}
int main() 
{
	int x,y;std::cin>>x>>y;
	while(x++)
		if(isprime(x))
			break;
	if(x==y)std::cout<<"YES";
	else std::cout<<"NO";
}
