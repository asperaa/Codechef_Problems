#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t,n,m;

	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		if((n==1 && m%2==0)||(m==1 && n%2==0))
		{
			cout<<"Yes"<<endl;
		}

		else if((n==1 && m%2==1)||(m==1 && n%2==1))
			cout<<"No"<<endl;

		else if(n%2==1 && m%2==1)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;


	}
}