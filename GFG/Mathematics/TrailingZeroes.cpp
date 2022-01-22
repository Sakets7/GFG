#include <iostream>
using namespace std;

int trailingZeroes(int n) {
  int fact = 1;
  int res = 0;
  for(int i = 2; i <= n; i++)
    fact = fact * i;
  while(fact % 10 == 0) {
    res++;
    fact = fact / 10;
  }
  return res;
}

int main() {
  int res = trailingZeroes(10);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Efficient Method :-  Time Complexity: O(log(n))
      This method solves the problem of overflow as here we don't have to calculate the factorial.
      Here we calculate the numbere of 5s as it contributes in the making of 10 which contributes in
        the zeroes. Calculation of the number of 2s is not required because 5s are less than 2s. 

int trailingZeroes(int n) {
  int res = 0;
  for(int i = 5; i <= n; i *= 5)
    res = res + n/i;
  return res;
}
*/

/* Calculation of Time Complexity :
      5^k <= n       (5 power k because we are multiplying i by 5)
  =>  k <= log(n)
*/