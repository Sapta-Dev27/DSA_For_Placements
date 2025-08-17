#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n+1);
  vector<int> temp;
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i+1];
  }
  for (int i = 1; i <=  n; i++)
  {
    if (arr[i] == i)
    {
      temp.push_back(arr[i]);
    }
  }
  if(temp.size() == 0) {
    cout << "No elements found";
  }
  for (int i = 0; i < temp.size(); i++)
  {
    cout << temp[i] << " ";
  }
  return 0;
}