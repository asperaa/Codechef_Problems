#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

bool pal(string s)
{
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]==s[l-i-1])
			continue;
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n,flag=0;

	cin>>n;

	

	for(int i=0;i<n;i++)
	{
		string s,t;
		cin>>s>>t;
		flag=0;

		set<char>s1;
		set<char>s2;
		for(int j=1;j<s.length();j++)
		{
			s1.insert(s[j]);
			s2.insert(t[j]);


		}

		if(s1.size()==1 && s1.size()==1)
			cout<<'A';
		else
			cout<<'B';
	}

	return 0;

}