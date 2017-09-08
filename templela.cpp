#include <iostream>

using namespace std;

int main()
{
	int s,ni;

	cin>>s;

	for(int i=0;i<s;i++)
	{
		int l1=0,l2=0,flag=0;
		cin>>ni;

		int a[ni];
		for(int j=0;j<ni;j++)
			cin>>a[j];

		
		for(int k=0;k<ni;k++)
		{
			if(ni%2==2)
			{
				flag=1;
				break;
			}

			if(a[0]!=1 && a[ni-1]!=1)
			{
				flag=1;
				break;
			}

			while(a[k]==a[k+1]-1 && k<(ni/2) +1)
			{
				k++;
				l1++;
			}

			while(a[k]==a[k+1]+1 && k<ni-1)
			{
				k++;
				l2++;
			}

		}

		if(flag==0 && l1==(ni/2) && l2==(ni/2))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

		cout<<c<<endl;
	}

}
