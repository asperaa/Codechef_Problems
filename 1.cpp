#include <iostream>
#include <algorithm>

using namespace std;

int check(int n) {
  int m = n;
  int digit;
  int count = 0;
  while(m > 0) {
    digit = m % 10;
    m = m / 10;
    if(n % digit == 0) {
      count++;
    }
  }
  if(count >= 2) {
    return 1;
  } else {
    return 0;
  }
}


int main()
{
  int n;
  cin>>n;

  cout<<check(n);
}