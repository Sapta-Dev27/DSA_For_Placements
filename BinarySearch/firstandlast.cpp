#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

pair<int, int> firstAndLast(vector<int> arr, int k)
{
  int n = arr.size();
  int first = -1;
  int last = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      if (first == -1)
      {
        first = i;
      }
      last = i;
    }
  }
  return {first, last};
}

int main()
{
  int n;
  cout << "Enter the no of the array elments :" << endl;
  cin >> n;
  cout << "Enter the elements of the array :" << endl;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int x;
  cout << "Enter the element to be searched :" << endl;
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