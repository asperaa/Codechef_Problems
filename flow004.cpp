#include <iostream>

using namespace std;

int main()
{
	int t,n,r,p,c=0;

	cin>>t;

	

	

	

	for(int i=0;i<t;i++)
	{
		cin>>n;
		r=n%10;
		c=0;
		p=n;

		while(p>=10)
		{
			p=p/10;
			
		}

	
		cout<<r+p<<endl;
	}

}