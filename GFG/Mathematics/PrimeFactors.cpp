#include <iostream>
using namespace std;

bool isPrime(int n) {
  if(n == 1)    return false;
  if(n == 2 || n == 3)    return true;
  if(n % 2 == 0 || n % 3 == 0)   
    return false;
  for(int i = 5; i*i < n; i += 6)
    if(n % i == 0 || n % i+2 == 0)    return false;
  return true;
}

/* Naive Method :- Time Complexity: O(n^2log(n))  */

void factors(int n) {
  for(int i = 2; i < n; i++) {
    if(isPrime(i)) {
      int x = i;    // because powers of i can also divide n like for n=8, i=2 divides but
      // 4 also divides. So we will print 2 two times.
      while(n % x == 0) {  // In this while loop, x is multiplying itself to i which can reach upto
                              // n times, so this loop has TC: O(log(n)) and the rest has TC: O(n^2).
        cout<< i<< " ";
        x *= i;
      }
    }
  }
}

int main() {
  factors(12);

  cout<<endl;
  return 0;
}

/* Efficient Method :- If (i divides n) then we (print i) and (divide n by i) as a number is a
  multiplication of its prime factors.

void factors(int n) {
  if(n <= 1)    return;
  for(int i = 2; i*i <= n; i++)
    while(n % i == 0) {
      cout<< i<< " ";
      n /= i;
    }
  if(n > 1)    cout<< n;
}
*/

/* Pro Method :-

void factors(int n) {
  if(n <= 1)    return;
  while(n % 2 == 0) {
    cout<< "2 ";
    n /= 2;
  }
  while(n % 3 == 0) {
    cout<< "3 ";
    n /= 3;
  }
  for(int i = 2; i*i <= n; i++)
    while(n % i == 0) {
      cout<< i<< " ";
      n /= i;
    }
  if(n > 3)    cout<< n;
}
*/
