#include <iostream>

using namespace std;

int max3(int x, int y, int z) {
  if(x >= y) {

  	if(x>=z)
  		return x;
  	else
  		return z;




 } else if(y >= z) {
    return y;
  } 
  return z;
}
