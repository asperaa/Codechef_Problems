#include <bits/stdc++.h>

using namespace std;
int bs(int a[],int l,int r,int s)
{
	int mid;

	while(l<r)
	{
		mid=(l+r)/2;

		if(s<a[mid])
			r=mid-1;

		else if(s>a[mid])
			l=mid+1;

		else if(s==a[mid])
			return mid;

		else
			return -1;

	}
}
int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;

		int a[n+m];

		set<int>s1;
		

		for(int i=0;i<n+m;i++)
		{
			cin>>a[i];
			s1.insert(a[i]);
		}

			

		

		cout<<n+m-s1.size()<<endl;
	}
}
