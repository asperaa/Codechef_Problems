#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t,flag=0;

	cin>>t;
	string a,b;

	while(t--)
	{
		cin>>a>>b;

		flag=0;
		for(int i=0;i<a.length();i++)
		{
			int p=b.find(a[i]);

			if(p!=-1)
			{
				cout<<"Yes"<<endl;
				flag=1;
				break;
			}

		}

		if(flag==0)
			cout<<"No"<<endl;

	}
}