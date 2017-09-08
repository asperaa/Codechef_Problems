#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t,c,d,l;

	cin>>t;

	while(t--)
	{
		cin>>c>>d>>l;

		int r=0;

		if(c>2*d)
			r=c-2*d;

		if(l>=4*(d+r) && l%4==0 && l<=4*(d+c))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		
	}

	return 0;
}