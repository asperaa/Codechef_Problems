#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t,i=0,j=0,k=0,n=0;
	cin>>t;

	int q[8];

	for(i=0;i<t;i++)
	{
		cin>>n;
		flag=0;
		c>0;

		for(k=1;k<8;k++)
			q[k]=1;

		for(j=0;a[j+1]==a[j]+1 || a[j+1]==a[j];j++)
		{
			c=max(count(a,a+n,a[j]),c);

			if(a[j]==a[j+1])
				q[a[j]]++;
			
			if(!(a[j+1]==a[j]+1 || a[j]==a[j+1]))
			{
				flag=1;
				break;
			}
		}	

		j++;

		for(;j<n && flag==0;j++)
		{
			c=max(count(a,a+n,a[j]),c);
			
			if(a[j]==a[j+1])
			{
				q[a[j]]--;
			}
		}

		if(flag==1 || a[0]!=1 ||a[n-1]!=1 || count(q+1,q+8,1)!=7 ||)
	}
}