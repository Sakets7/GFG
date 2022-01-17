#include <iostream>
using namespace std;

bool palindrome(int x) {
  int rev = 0;
  int temp = x;
  while(x > 0) {
    rev = (rev * 10) + (x % 10);
    x = x / 10;
  }
  return rev == temp;
}

int main() {
  int x = 242;
  int rev = palindrome(x);
  cout<< rev;

  cout<<endl;
  return 0;
}