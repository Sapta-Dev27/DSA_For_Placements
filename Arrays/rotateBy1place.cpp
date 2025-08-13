#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of elements in the array: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array elements: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int temp = arr[0];
  for (int i = 1; i < n; i++)
  {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  cout << "Array after rotating by 1 place: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
