#include <bits/stdc++.h>
using namespace std;

/*int ps(int a[],int p)
{

	int sum=0;
	for(int i=1;i<=p;i++)
		sum+=a[i];

	return sum;

}
*/

/*int ss(int a[],int p,int n)
{
	int sum=0;
	for(int i=n;i>=p;i--)
		sum+=a[i];

	return sum;
}*/

int main()
{
	int t;

	cin>>t;
	long long int minn=0,s=0,msum=0;
	while(t--)
	{
		long long int n;
		cin>>n;

		
		long long int a[n+1];

		long long int ts=0;

		for(int i=1;i<=n;i++)
			cin>>a[i];

		for(int i=1;i<=n;i++)
			ts+=a[i];

		
		minn=1,msum=ts+a[1];
		
		for(int i=2;i<=n;i++)
		{
			
			s=ts+a[i];

		//	cout<<s<<endl;
			if(s<msum)
			{
				msum=s;
				minn=i;
			}

		}

		cout<<minn<<endl;
	}
}