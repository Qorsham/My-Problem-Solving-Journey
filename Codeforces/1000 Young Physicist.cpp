#include <iostream>
int main() {
#include <iostream>
int main() {
  int xx,x,y,z;std::cin>>xx;int count[3] ={0};
  for (int i=0;i<xx;i++)
  {
    std::cin>>x>>y>>z;
    count[0]+=x;count[1]+=y;count[2]+=z;
  }
  (count[0]==0&&count[1]==0&&count[2]==0)?std::cout<<"YES":std::cout<<"NO";
  
 
}

}

