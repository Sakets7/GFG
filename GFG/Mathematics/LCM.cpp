#include <iostream>
using namespace std;

// Time Complexity: O((a*b) - max(a, b))

int lcm(int a, int b) {
  int res = max(a, b);
  while(true) {
    if(res % a == 0 && res % b == 0)    return res;
    res++;
  } 
}

int main() {
  int res = lcm(4, 6);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: O(log(min(a, b)))
int gcd(int a, int b) {
  if(b == 0)    return a;
  return gcd(b, a%b);
}
int lcm(int a, int b) {
  return (a*b) / gcd(a, b);
}