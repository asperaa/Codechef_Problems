#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	int a[26],b[26];
	char c[26];

	for(int k=0;k<26;k++)
		c[k]=(97+k);
	string s;
	for(int i=0;i<t;i++)
	{
		int cost=0;
		for(int k=0;k<26;k++)
			b[k]=0;

		for(int j=0;j<26;j++)
			cin>>a[j];
		

		cin>>s;

		set<char>s1;

		for(int j=0;j<s.length();j++)
			s1.insert(s[j]);

		vector<char>v1(s1.begin(),s1.end());

		int p=0;
		for(int j=0;j<26;j++)
		{
			if(c[j]==v1[p])
			{
				b[j]++;
				p++;
			}
		}

		for(int j=0;j<26;j++)
		{
			if(b[j]==0)
				cost+=a[j];
		}

		cout<<cost<<endl;

	}






		
}