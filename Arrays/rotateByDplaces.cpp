#include <iostream>
using namespace std;
#include <vector>

int main()
{
  int n;
  cout << "Enter the number of elements in the array: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int d1;
  cout << "Enter the number of places to rotate :" << endl;
  cin >> d1;
  int d = d1%n ;
  if( d == 0) {
    cout << "The array is not rotated as the number of places to rotate is equal to the size of the array." << endl;
  }
  vector<int>temp;
  for (int i = 0; i < d; i++)
  {
    temp.push_back(arr[i]);
  }
  for (int i = d; i < n; i++)
  {
    arr[i - d] = arr[i];
  }
  for (int i = n-d; i < n; i++)
  {
    arr[i] = temp[i - (n-d)];
  }
  cout << "The roated array :" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "";
  }
  return 0;
}