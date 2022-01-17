//                           Longest Even Odd Subarray

#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: O(n^2)  */

int maxEvenOdd(int arr[], int n) {
  int res = 1;
  for(int i=0; i<n; i++) {
    int curr = 1;
    for(int j=i+1; j<n; j++)
      if((arr[j]%2 == 0 && arr[j-1]%2 != 0) || (arr[j]%2 != 0 && arr[j-1]%2 == 0))
        curr++;
      else    break;
    res = max(res, curr);
  }
  return res;
}

int main() {
  int arr[] = {1, 1, 3, 2, 5, 4, 7, 4, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int res = maxEvenOdd(arr, n);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Pro Method :- Time Complexity: O(n) 

int maxEvenOdd(int arr[], int n) {
  int res = 1, curr = 1;
  for(int i=1; i<n; i++) {
    if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0)) {
        curr++;
        res = max(res, curr);
      }
      else    curr = 1;
  }
  return res;
}
*/