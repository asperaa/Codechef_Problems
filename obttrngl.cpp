#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,k;
	long long int  a,b;

	cin>>t;

	
	while(t--)
	{

		cin>>k>>a>>b;

		int d=abs(a-b);

		if(d<k-d)
			cout<<d-1<<endl;
		else if(d>k-d)
			cout<<k-d-1<<endl;
		else
			cout<<0<<endl;


	}

}