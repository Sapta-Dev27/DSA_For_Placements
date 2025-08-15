#include <iostream>
using namespace std;
#include <vector>
#include <utility> // for std::pair

pair<int, int> floorAndCeil(vector<int> arr, int target)
{
  int n = arr.size();
  int low = 0;
  int high = n - 1;
  int floor = -1;
  int ceil = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
      floor = arr[mid];
      ceil = arr[mid];
    }
    else if (arr[mid] < target)
    {
      floor = arr[mid];
      low = mid + 1;
    }
    else
    {
      ceil = arr[mid];
      high = mid - 1;
    }
  }
  return {floor, ceil};
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
  pair<int, int> result = floorAndCeil(arr, target);
  if (result.first == -1)
  {
    cout << "No floor found for the target element." << endl;
  }
  else
  {
    cout << "The floor of the target element is: " << result.first << endl;
  }
  if (result.second == -1)
  {
    cout << "No ceil found for the target element." << endl;
  }
  else
  {
    cout << "The ceil of the target element is: " << result.second << endl;
  }
  return 0;
}