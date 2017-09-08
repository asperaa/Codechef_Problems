#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>v;

	int t;
	cin>>t;
	set<char>s;

	while(t--)
	{
		unsigned long long int n;
		cin>>n;

		v.clear();
		s.clear();
		unsigned long long int rem=0;
		while(n>0)
		{
			rem=n%10;
			n=n/10;
			v.push_back(rem);
		}

		/*for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
			cout<<endl;
		*/
		//string s="";
	int num1=0;
		for(int i=0;i<v.size();i++)
		{
			for(int j=0;j<v.size();j++)
			{
				if(i!=j)
				{
					num1=v[i]*10+v[j];
					if(num1>=65 && num1<=90)
					{	
						
						s.insert(num1);
					}
				}
			}
		}

		if(s.size()!=0)
		{
			vector<char>v1(s.begin(),s.end());

			for(int i=0;i<v1.size();i++)
				cout<<v1[i];
				cout<<endl;
		}

		else
			cout<<'\n';

	}
}