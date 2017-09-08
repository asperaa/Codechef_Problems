#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,c=0;

	cin>>t;
	string s;
	string p;
	while(t--)
	{
		c=0;
		p="";
		cin>>s;

		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='>')
				p+='<';
			else if(s[i]=='<')
				p+='>';
			else if(s[i]=='*')
				p+='*';
		}

		for(int i=0;i<s.length();i++)
		{
			if(p[i]=='>' && p[i+1]=='<')
				c++;
		}

		cout<<c<<endl;
	}
}