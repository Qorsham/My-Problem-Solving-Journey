#include <iostream>
#include <cstdlib>
int main() 
{
	int A[5][5];int x,y;
	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			std::cin>>A[i][j];
			if (A[i][j]==1){
				x=i;
				y=j;
				break;
			}
		}
	}
	std::cout<<std::abs(x-2)+std::abs(y-2);
}
