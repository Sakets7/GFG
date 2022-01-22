#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: theta(n)  */

int power(int x, int n) {
  int res = 1;
  for(int i = 1; i <= n; i++)
    res *= x;
  return res;
}

int main() {
  cout<< power(3, 2);

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: theta(log(n))   Auxillary Space: theta(log(n))

int power(int x, int n) {
  if(n == 0)    return 1;
  int temp = power(x, n/2);
  temp = temp * temp;         // This line because we have only found power of n/2, so we have to double it.
  if(n % 2 == 0)    return temp;
  else              return temp * x; 
}
*/