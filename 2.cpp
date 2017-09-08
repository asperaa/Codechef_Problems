#include <iostream>
#include <algorithm>

using namespace std;

int triangleType(int a, int b, int c) {
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}

int main()
{
	int a,b,c;

	cin>>a>>b>>c;

	cout<<triangleType(a,b,c);
}