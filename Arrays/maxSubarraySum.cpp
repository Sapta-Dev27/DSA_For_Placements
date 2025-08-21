#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
    if (sum > max)
    {
      max = sum;
    }
    if( sum < 0) {
      sum = 0;
    }
  }
  cout << "Maximum subarray sum is: " << max << endl;
  return 0;
}