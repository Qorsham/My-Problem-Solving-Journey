#include <iostream>
#include <set>

int main() {
	int x,setsize,a[4];std::cin>>x;x++;
	while(true)
	{
		std::set<int> set;
		set.insert(x/1000);
		set.insert((x%1000)/100);
		set.insert((x%100)/10);
		set.insert(x%10);
		if(set.size()==4)
		{
			std::cout<<x;
			break;
		}
		else x++;
		
	}
	
	
	
}
