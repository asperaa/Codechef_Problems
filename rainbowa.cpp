#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t,n,flag=0,k=0,p=0;

	long int c=0;
	cin>>t;

	for(int i=0;i<t;i++)
	{	
		flag=0;
		k=0,c=0;
		p=0;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];


		

		for(k=0;a[k]<=a[k+1];k++)
		{}

		p=k;

		for(int r=0;r<p;r++)
		{
			c=max(count(a,a+n,a[r]),c);
			
			if(((a[r]==a[r+1]-1) || (a[r]==a[r+1])) && (a[r]==a[n-r-1]) )
				flag=0;


			

			else if(a[r]<1 || a[r]>7 || t<1 || t>100)
			{
				flag=1;
				break;
			}

			else
			{
				flag=1;
				break;
			}
		}



	
		if(flag==1 || c>20 || a[n/2]!=7 || n<13 ||n>100 ||a[0]!=1 || a[n-1]!=1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;

	//	cout<<c<<endl;
	
	}

	return 0;
}