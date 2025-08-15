/*
UPPER BOUND  : arr[mid] > target
*/

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> arr, int target)
{
  int n = arr.size();
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] > target)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans;
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
  int result = upperBound(arr, target);
  cout << "The upper bound index of the target element is: " << result << endl;
  return 0;
}