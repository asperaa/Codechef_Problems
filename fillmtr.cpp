#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	int n,q;
	while(t--)
	{
		cin>>n>>q;

		int a[n+1][n+1];
		int p[q+1][2];
		int b[n+1];
		for(int i=1;i<=n;i++)
			{	b[i]=0;
				
				for(int j=1;j<=n;j++)
					a[i][j]=-100;
			}


		int x,y,val;
		for(int i=1;i<=q;i++)
		{
			cin>>x>>y>>val;
			a[x][y]=val;
			p[i][0]=x;
			p[i][1]=y;
		}

		int flag=0;

		int cnt=0;
		for(int i=1;i<=q;i++)
		{
			
				if(p[i][0]==p[i][1] && a[p[i][0]][p[i][1]]!=0 && a[p[i][0]][p[i][1]]!=-100)
				{
					flag=1;
					break;
				}

				else if(a[p[i][0]][p[i][1]]==1 && a[p[i][1]][p[i][0]]!=1 && a[p[i][1]][p[i][0]]!=-100)
				{
					
						flag=1;
						break;
				}

				if(cnt<=n)
				{
					if(a[p[i][0]][p[i][1]]==1 && b[p[i][0]]==0 && b[p[i][1]]==0)
					{
						b[p[i][0]]++;
						b[p[i][1]]=b[p[i][0]]+1;
						cnt+=2;
					}

					if(a[p[i][0]][p[i][1]]==1 && b[p[i][0]]==0 && b[p[i][1]]==2)
					{
						b[p[i][0]]=1;
						cnt++;
					}

					if(a[p[i][0]][p[i][1]]==1 && b[p[i][0]]==0 && b[p[i][1]]==1)
					{
						b[p[i][0]]=2;
						cnt++;
					}

					if(a[p[i][0]][p[i][1]]==1 && b[p[i][1]]==0 && b[p[i][0]]==2)
					{
						b[p[i][1]]=1;
						cnt++;
					}

					if(a[p[i][0]][p[i][1]]==1 && b[p[i][1]]==0 && b[p[i][0]]==1)
					{
						b[p[i][1]]=2;
						cnt++;
					}

				}
			

			
		}

		/*for(int i=1;i<=n;i++)
			cout<<b[i]<<" ";
		*/
		for(int i=1;i<=q;i++)
		{
			if(a[p[i][0]][p[i][1]]==1 && abs(b[p[i][0]]-b[p[i][1]])!=1)
			{
				flag=1;
				break;
			}
		}

		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;




	}

}