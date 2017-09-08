#include <iostream>

using namespace std;

int has(int *a, int n, int x, int k) 
{

	
	if(k>0 && a[0]!=x && n==1)
		return 0;
	else 
		return 1;	 


  	if(a[n-1] == x) 
  	{
    	return has(a, n-1, x, k-1);
  	} 
  
 	else
  	{
    	return has(a, n-1, x, k);
  	}
}

int main()
{
	int n,x,k;

	cin>>n;

	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>x>>k;

	cout<<has(a,n,x,k);
}
