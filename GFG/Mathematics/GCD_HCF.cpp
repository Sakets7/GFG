#include <iostream>
using namespace std;

int gcd(int a, int b) {
  int res = min(a, b);
  while(res > 0) {
    if(a % res == 0 && b % res == 0)   break;
    res--;
  }
  return res;
}

int main() {
  int res = gcd(12, 15);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Efficient Method (Euclideon Algorithm) :-

int gcd(int a, int b) {
  while(a != b)
    if(a > b)    a = a - b;
    else         b = b - a;
  return a;
*/


/* Pro Method (OPTIMISED Euclideon Algorithm) :- 

int gcd(int a, int b) {
  if(b == 0)    return a;
  else          return gcd(b, a%b)
}
*/

/* Explanation of Euclideon Algorithm

GCD of a and b is g => a = gx and b = gy
                    => GCD(x, y) = 1
From line 38 and 39, a-b = g(x-y) => GCD(a-b, b) = g
Therefore, GCD(a, b) = GCD(a-b, b)
*/