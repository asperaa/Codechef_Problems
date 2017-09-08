#include <bits/stdc++.h>

using namespace std;

int main()
{
	const unsigned int M = 1000000007;
	int T;
	cin>>T;

	while(T--)
	{
		int n,m;
		cin>>n>>m;
		
		unsigned long long int a[m+1][n+1];
		unsigned long long int c[n+1];

		for(int x=1;x<=m;x++)
		{
			
			for(int y=1;y<=n;y++)
			{
				a[x][y]=0;
				c[y]=0;
			}
		}

		


		int t,l,r;

		for(int i=1;i<=m;i++)
		{
			cin>>t>>l>>r;

			if(t==1)
			{
				for(int k=l;k<=r;k++)
					a[i][k]=(a[i][k]+1)%M;
					
			}

			if(t==2)
			{
				for(int p=1;p<=n;p++)
				{
					for(int k=l;k<=r;k++)
					{
						a[i][p]=a[i][p]%M+a[k][p]%M;

					}

				}
			}

		}

		for(int j=1;j<=n;j++)
		{
			for(int q=1;q<=m;q++)
			{
				c[j]=c[j]%M+a[q][j]%M;
			}

		}

/*		for(int o=1;o<=m;o++)
			{
				for(int e=1;e<=n;e++)
					cout<<a[o][e]<<" ";
				cout<<endl;
			}
*/
		for(int s=1;s<=n;s++)
			cout<<c[s]<<" ";
			cout<<endl;
	}




}