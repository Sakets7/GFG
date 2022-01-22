#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: O(n)  */

bool isPrime(int n) {
  if(n == 1)    return false;
  for(int i = 2; i < n; i++)
    if(n % i == 0)    return false;
  return  true;
}

int main() {
  isPrime(23) ? cout<< "True" : cout<< "False";

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: O(sqrt(n))

The divisors always have a pair, so why check till
last. Check only till sqrt(n).
Ex -> 30: (1, 30), (2, 15), (3, 10), (5, 6)
If(x, y) is a pair => x*y = n
and if (x <= y) => x*x <= n
                => x <= sqrt(n)

bool isPrime(int n) {
  if(n == 1)    return false;
  for(int i = 2; i*i < n; i++)
    if(n % i == 0)    return false;
  return  true;
}
*/


/* Pro Method :- Takes 3 times less time

bool isPrime(int n) {
  if(n == 1)    return false;
  if(n == 2 || n == 3)    return true;
  if(n % 2 == 0 || n % 3 == 0)    return false;
  for(int i = 5; i*i < n; i += 6)
    if(n % i == 0 || n % i+2 == 0)    return false;
  return true;
}
*/
