#include <iostream>
using namespace std;
#include <vector>

int duplicateNo(vector<int>arr){
    int n = arr.size();
    for(int i = 0 ; i < n ; i++) {
      int check = arr[i];
      int count = 0 ;
      for(int j = 0 ; j < n ; j++) {
        if(arr[j] == check) {
          count ++;
        }
      }
      if(count > 1) {
          return check ;
      }
    }
    return -1;
}

int main()
{
  int n;
  cout << "Enter the no of the array elements :" << endl;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int duplicate =  duplicateNo(arr);
  if(duplicate == -1) {
    cout << "No duplicate element found" << endl;
  }
  else {
    cout << "Duplicate element found: " << duplicate << endl;
  }
  return 0;
}