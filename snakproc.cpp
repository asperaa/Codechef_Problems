#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int r,l;
	
	int flag=0;
	string s,p="";
	cin>>r;

	for(int i=0;i<r;i++)
	{
		
		p="";
		flag=0;
		cin>>l;
		cin>>s;

		for(int j=0;j<l;j++)
		{
			
			if(isalpha(s[j]))
				p+=s[j];
		}			
					
	//	cout<<p<<endl;
	
		for(int k=0;k<p.length()-1;k=k+2)
		{
			//cout<<p[k]<<p[k+1]<<endl;
			if(p[k]=='H' && p[k+1]=='T')
				continue;
		
			else
			{
				
				flag=1;
				break;
				}
		}

				if((flag==0 || p=="" )&& p.length()%2==0 )
					cout<<"Valid"<<endl;
				else
					cout<<"Invalid"<<endl;
		
	}
}

			
			



