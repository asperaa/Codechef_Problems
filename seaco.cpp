#include <bits/stdc++.h>

using namespace std;

void s(unsigned long long int a[],int c[][3],int st,int end)
{
	for(int i=st;i<=end;i++)
		{	
			if(c[i][0]==1)
			{
				for(int k=c[i][1];k<=c[i][2];k++)
					a[k]++;
			}

			if(c[i][0]==2)
			{
				s(a,c,c[i][1],c[i][2]);

			}
		}
}

int main()
{
	int T;
	cin>>T;

	while(T--)
	{
		int m,n;
		cin>>n>>m;

		unsigned long long a[n+1];

		for(int i=1;i<=n;i++)
			a[i]=0;

		int c[m+1][3];

		for(int i=1;i<=m;i++)
			for(int j=0;j<3;j++)
				cin>>c[i][j];

		
		s(a,c,1,m);

		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
			cout<<endl;
		
	}
}