#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int a[n+1];

		if(n%2==0)
		{
			for(int i=1;i<=n;i++)
			{
				if(i%2==1)
					a[i]=i+1;
				else
					a[i]=i-1;
			}
		}

		else
		{
			for(int i=1;i<=n-2;i++)
			{
				if(i%2==1)
					a[i]=i+1;
				else
					a[i]=i-1;
			}

			a[n-1]=n;
			a[n]=n-2;
		}

		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}

}