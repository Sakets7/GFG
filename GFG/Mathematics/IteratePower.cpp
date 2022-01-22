#include <iostream>
using namespace std;

/* Time Complexity: O(log(n)) */

int iterate(int x, int n) {
  int res = 1;
  while(n > 0) {
    if(n % 2 != 0)    // In bitwise, we can write (n & 1)
      res *= x;
    x *= x;
    n = n/2;    // In bitwise, (n = n >> 1;)
  }
  return res;
}

// For calculating large powers, we do (% m) in lines 8 and 9 and we pass (int m) as parameter.
// 5 = 1001 that means (4^1)*1 + (4^2)*0 + (4^3)*0 + (4^4)*1 = 1024

int main() {
  cout<< iterate(4, 5);

  cout<<endl;
  return 0;
}