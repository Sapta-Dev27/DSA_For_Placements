#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> arr, int k)
{
  int n = arr.size();
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] >= k)
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

int lastOccurance(vector<int> arr, int k)
{
  int low = 0;
  int n = arr.size();
  int high = n - 1;
  int ans;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] > k)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans - 1;
}

pair<int, int> firstAndLast(vector<int> arr, int k)
{
  int first = firstOccurance(arr, k);
  int last = lastOccurance(arr, k);
  if (first == arr.size())
  {
    return {-1, -1};
  }
  else
  {
    return {first, last};
  }
}

int main()
{
  int n;
  cout << "Enter the number of array elements: " << endl;
  cin >> n;
  cout << "Enter the elements of the array: " << endl;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int x;
  cout << "Enter the element to be searched: " << endl;
  cin >> x;
  pair<int, int> result = firstAndLast(arr, x);
  if (result.first == -1)
  {
    cout << "Element not found in the array." << endl;
  }
  else
  {
    cout << "First occurrence: " << result.first << endl;
    cout << "Last occurrence: " << result.second << endl;
  }
  return 0;
}