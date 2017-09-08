#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	
	

	vector <string> v ;
	string s;

	while(1)
	{

		getline(cin,s);

		v.push_back(s);

		if(s==" ")
			break;
	}


	int n=(int)v.size();

	for(int i=n/2;i<n-1;i++)
		cout<<v[i]<<endl;

	for(int i=0;i<n/2;i++)
		cout<<v[i]<<endl;

	return 0;

}