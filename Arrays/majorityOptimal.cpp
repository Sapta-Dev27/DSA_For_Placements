#include <vector>
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int count = 0;
  int el;
  for (int i = 0; i < n; i++)
  {
    if (count == 0)
    {
      el = arr[i];
      count++;
    }
    else if (arr[i] == el)
    {
      count++;
    }
    else
    {
      count--;
    }
  }
  int count2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == el)
    {
      count2++;
    }
  }
  if (count2 > n / 2)
  {
    cout << "The majority element is: " << el << endl;
  }
  return 0;
}
