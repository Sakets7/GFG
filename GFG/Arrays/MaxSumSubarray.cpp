/*                              Maximum Sum Subarray 
  Subarray of {1, 2, 3} is {1}, {2}, {3}, {1, 2}, {2, 3}, {1, 2, 3}.
  {1, 3} is a subset but not a subarray, it has to be consecutive.
  If all the nos. are positve, then result is the sum of all nos. but problem arises when there 
  are negative nos. */

/* Naive Method :- Time Complexity: O(n^2)    Auxillary Space: O(1) */

#include <iostream>
using namespace std;

int maxSum(int arr[], int n) {
  int res = 0;
  for(int i = 0; i < n; i++) {
    int curr = 0;
    for(int j = i; j < n; j++)
      curr += arr[j];
      res = max(res, curr);
  }
  return res;    
}

int main() {
  int arr[]= {1, -2, 3, -1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  int res = maxSum(arr, n);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: O(n)   Auxillary Space: O(1)

int maxSum(int arr[], int n) {
  int res = arr[0], maxEnding = arr[0];
  for(int i = 1; i < n; i++) {
    maxEnding = max(maxEnding + arr[i], arr[i]);
    res = max(res, maxEnding);
  }
  return res;
}
// Can't start from {{i = 0}} (line 38) and can't initialise {{res = 0 and maxEnding = 0}} (line 37)
    because if arr[0] is a -ve number, then maxEnding and res would not change as we have done max
    in (line 39 and 40).
    Therfore, we have to initialise maxEnding and res with arr[0].
*/