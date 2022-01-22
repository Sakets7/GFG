#include <bits/stdc++.h>
using namespace std;

/* Time Complexity:- O(nloglog(n))  */

void Sieve(int n) {
  bool prime[n+1]; 
  memset(prime, true, sizeof(prime)); // Instead of lines 7 and 8 we could write only one line i.e.
                                            // vector <bool> prime(n+1, true);
  for(int i = 2; i*i <= n; i++) {
    if(prime[i]) 
      for(int j = i*2; j <= n; j += i) // we can write (i*i) instead of (i*2) to make it faster.
        prime[j] = false;
  }
    for(int i = 2; i <= n; i++)
    if(prime[i])
      cout<< i<< " ";
} 

int main() {
  Sieve(12);

  cout<<endl;
  return 0;
}

/* Efficient Method :- Make the changes done in the comments  */


/* Pro Method :- 

void Sieve(int n) {
  vector <bool> prime(n+1, true);
  for(int i = 2; i <= n; i++) {   // Notice that here it is (i<=n) instead of (i*i<=n)
    if(prime[i]) {
      cout<< i<< " ";
      for(int j = i*i; j <= n; j += i)
        prime[j] = false;
    }
  }
} 
*/  
