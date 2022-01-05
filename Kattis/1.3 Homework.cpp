#include <bits/stdc++.h>
int main() {
	int substr=0;
	std::string str;std::cin>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]==';')
			substr++;
	}
	if(substr!=0)
	{
		int substrpos[substr];int j =0;
		for(int i=0;i<str.size();i++){
			if(str[i]==';')
			{
				substrpos[j]=i;
				j++;
			}
		}
		substr+=2;
		int substrext[substr];
		substrext[0]=0;
		int js=0;
		for(int i=1;i<substr-1;i++)
		{
			substrext[i]=substrpos[js];
			js++;
		}
		substrext[substr-1] = str.size()-1;
		std::string subsubstr[substr-1];	
		int start = 0;
		int end = 1;
		int strcount= 0 ;
		on:
		for(int ir = substrext[start]; ir<=substrext[end] ;ir++){
			subsubstr[strcount]+=str[ir];
		}
		start++;
		end++;
		strcount++;
		if(end<substr)goto on;
		else 
		{
			for(int i=0;i<substr-1;i++)
				subsubstr[i].erase(std::remove(	subsubstr[i].begin(),subsubstr[i].end(),';'),subsubstr[i].end());
		}
		int howmanystr=0;
		for(int i=0;i<substr-1;i++)
		{
			for(int j=0;j<subsubstr[i].size();j++)
			{
				if(subsubstr[i][j]=='-'){
					howmanystr++;
				}	
			}
		}
		int count=0;
		if(howmanystr!=0)
		{
			std::string dash[howmanystr];
			int jj=0;
			for(int i=0;i<substr-1;i++)
			{
				for(int j=0;j<subsubstr[i].size();j++)
				{
					if(subsubstr[i][j]=='-'){
					dash[jj]=subsubstr[i];
					jj++;
					}	
				}
			}
			std::string strx1[howmanystr];
			std::string strx2[howmanystr];
			for(int i=0;i<howmanystr;i++)
			{
				std::stringstream ss(dash[i]);
				while(ss.good())
				{
					if(ss.good()==1)
					{
						std::string substr;
						getline(ss, substr, '-');
						strx1[i]=substr;	
					}
					if(ss.good()==1)
					{
						std::string substr;
						getline(ss, substr, '-');
						strx2[i]=substr;
					}
				}
			}
			int numx[howmanystr];
			int numy[howmanystr];
			for(int i=0;i<howmanystr;i++)
			{
				std::stringstream sss;  
  				sss << strx1[i];  
  				sss >> numx[i];  
  				std::stringstream sssx;  
  				sssx << strx2[i];  
  				sssx >> numy[i];  
			}
			for(int i=0;i<howmanystr;i++)
				count+=((numy[i]-numx[i])+1);
			std::cout<<count+((substr-1)-howmanystr);//Final
		}
		else{
			std::cout<<substr-1;	//Final
		}
	}
	else
	{
		bool dashin = false;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='-')
			{
				dashin = true;
			}
		}
		if(dashin==true)
		{
			std::string x;
			std::string y;
			int xx,yy;
			std::stringstream ss(str);
				while(ss.good())
				{
					if(ss.good()==1)
					{
						std::string substr;
						getline(ss, substr, '-');
						x=substr;				
					}
					if(ss.good()==1)
					{
						std::string substr;
						getline(ss, substr, '-');
						y=substr;
					}
				}
				std::stringstream sss;  
  				sss << x;  
  				sss >> xx;  
  				std::stringstream sssx;  
  				sssx << y;  
  				sssx >> yy; 
  				std::cout<<(yy-xx)+1;	
		}
		else std::cout<<1;	//Final
	}
}		
