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
  int el;
  cout << "Enter the element to find: ";
  cin >> el;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == el)
      {
        cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
        break;
      }
    }
  }
  return 0;
}