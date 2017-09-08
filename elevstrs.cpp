#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,v1,v2;

	cin>>t;

	float minn=0;
	float s=0,e=0;

	while(t--)
	{
		minn=0;
		cin>>n>>v1>>v2;

		s=(float)sqrt(2)*n/v1;
		e=(float)2*n/v2;


		minn=min(s,e);

		if(minn==s)
			cout<<"Stairs"<<endl;
		else if(minn==e)
			cout<<"Elevator"<<endl;
	}
}