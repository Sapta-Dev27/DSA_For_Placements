#include <iostream>
using namespace std;
#include <vector>
#include <set>
int main()
{
  int n;
  cout << "Enter the size of the array: " << endl;
  cin >> n;
  vector<int> arr(n);
  cout << " Enter the array elements:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int floor_value = n/3;
  int check ;
  set <int> temp;
  for( int i = 0 ; i < n ; i++) {
    check = arr[i];
    int count =  0;
    for(int j = 0 ; j < n ; j++) {
      if(arr[j] == check) {
        count = count + 1;
      }
    }
    if( count > floor_value) {
  
      temp.insert(arr[i]);
    }
  }
  if(!temp.empty()) {
    for (auto val : temp)
      {
          cout << "Majority element found: " << val << endl;
      }
  }
  else {
    cout << "No majority element found" << endl;
  }

  return 0;
}