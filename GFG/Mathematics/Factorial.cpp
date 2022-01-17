#include <iostream>
using namespace std;

int factorial(int x) {
  int res = 1;
  for(int i = 2; i <= x; i++ )
    res = res * i;
  return res;
}

int main() {
  int res = factorial(5);
  cout<< res;

  cout<<endl;
  return 0;
}