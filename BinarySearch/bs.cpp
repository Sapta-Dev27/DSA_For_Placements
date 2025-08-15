#include <iostream>
using namespace std;
#include <vector>

int binarySearch(vector<int> arr, int target)
{
  int n = arr.size();
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout << "Enter the number of the array elements :" << endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int target;
  cout << "Enter the target element to search :" << endl;
  cin >> target;
  int result = binarySearch(arr, target);
  if (result == -1)
  {
    cout << "Element not found in the array." << endl;
  }
  else
  {
    cout << "Element found at index: " << result << endl;
  }
  return 0;
}