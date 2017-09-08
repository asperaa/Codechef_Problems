#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,m,c;
	cin>>t;

	while(t--)
	{
		vector<int>v;
		cin>>n>>m>>c;

		int cnt=0;
		for(int i=1;i<=c;i++)
		{
			if(c%i==0)
				v.push_back(i);
		}

		for(int i=0;i<v.size();i++)
		{
			if(v[i]<=n && c/v[i]<=m)
				cnt++;
		}

		cout<<cnt<<endl;
	}
}