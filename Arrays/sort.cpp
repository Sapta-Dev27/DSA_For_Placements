#include <iostream>
using namespace std;
#include <vector>

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> temp;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] == 0) {
      temp.push_back(arr[i]);
    }
  }
  for (int i = 0 ; i < n ; i++) {
    if(arr[i] == 1) {
      temp.push_back(arr[i]);
    }
  }
  for (int i = 0 ; i < n ; i++) {
    if(arr[i] ==2 ) {
      temp.push_back(arr[i]);
    }
  }

  cout << "The sorted array :" <<endl;
  for ( int i = 0 ; i < n ; i++ ) {
    cout << temp[i] << "";
  }
  return 0;
}