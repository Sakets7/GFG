//                Maximum Consecutive 1s

#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: O(n^2)    Auxillary Space: O(1) */

int maxConsOnes(int arr[], int n) {
  int res = 0;
  for(int i = 0; i < n; i++) {
    int curr = 0;
    for(int j = i; j < n; j++)
      if(arr[j] == 1)   curr++;
      else    
        break;
    res = max(res, curr);
  }
  return res;
}



int main() {
  int arr[] = {1, 1, 0, 0, 1, 1, 1, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  int res = maxConsOnes(arr, n);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: O(n)   Auxillary Space: O(1)

int maxConsOnes(int arr[], int n) {
  int res = 0, curr = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] == 0)   curr = 0;
    else {
      curr++;
      res = max(res, curr);
    }  
  }
  return res;
}
*/