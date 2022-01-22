#include <iostream>
using namespace std;

void divisors(int n) {
  for(int i = 1; i <= n; i++)
    if(n % i == 0)    cout<< i<< " ";
}

int main() {
  divisors(12);

  cout<<endl;
  return 0;
}

/* Efficient Method :- 

void divisors(int n) {
  for(int i = 1; i*i <=n; i++) { 
    if(n % i == 0)
      cout<< i<< " ";
    if(i != n/i)      // (i != n/i) because if (n is a perfect sq eg. 25), we don't want to 
                          // print 5 twice
      cout<< n/i<< " ";
  }
}
*/

/* Pro Method :- Efficient Method arranged in order but 12 throws an exception and don't know what 
  other numbers will be an exception.

void divisors(int n) {
  int i;
  for(i = 1; i*i <= n; i++)
    if(n % i == 0)    cout<< i<< " ";
  for( ; i>=1; i--)
    if(n % i == 0)    cout<< n/i<< " ";
}
*/