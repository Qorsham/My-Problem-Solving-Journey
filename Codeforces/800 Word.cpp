#include <iostream>
int main() {
	int x=0;std::string str;std::cin>>str;
	for(int i=0;i<str.size();i++){
		if((int)str[i]>=65&&(int)str[i]<=90)
			x++;
	}
	if(x>(str.size()/2)){
		for(int i = 0 ; i<str.size();i++)
			str[i]= toupper(str[i]);
	}
	else{
		for(int i = 0 ; i<str.size();i++)
			str[i]= tolower(str[i]);
	}
	std::cout<<str;
}
