#include <iostream>
using namespace std;
#include <vector>

vector<int> reverseArray(vector<int> arr)
{
  int n = arr.size();
  if (n == 1)
  {
    return arr;
  }
  int i = 0;
  int j = n - 1;
  if (n % 2 == 0)
  {
    while (i < j)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  else
  {
    while (i < j && i != j)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  return arr;
}

int main()
{
  int n;
  cout << "Enter the no of elements in the array :" << endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the array elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> reversedArray = reverseArray(arr);
  cout << "Reversed array is :" << endl;
  for ( int i = 0 ; i < n ; i++) {
    cout << reversedArray[i] << " ";
  }

  return 0;
}