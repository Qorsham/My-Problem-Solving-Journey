#include<iostream>
int main()
{
	int n,x=0,a[7];std::cin>>n;
    for (int i=0;i<7;i++)std::cin>>a[i];int t = a[0];
    while (t < n)
    {
        x++;
        x %= 7;
        t +=a[x];
    }
    std::cout<<x+1<<std::endl;
}
