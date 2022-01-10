#include<iostream>
int main()
{
    int n, k, l, c, d, p, a, y;
    std::cin>>n>>k>>l>>c>>d>>p>>a>>y;
    std::cout<<std::min(std::min(k*l/a,c*d),p/y)/n;
    return 0;
}
