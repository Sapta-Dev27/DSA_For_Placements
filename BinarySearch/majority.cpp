#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> arr)
{
  int n = arr.size();
  int check;
  int checkCount = (n / 2);
  for (int i = 0; i < n; i++)
  {
    check = arr[i];
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[j] == check)
      {
        count++;
      }
    }
    if (check > checkCount)
    {
      return arr[i];
    }
  }
  return -1;
}

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
  int majorityElment = majorityElement(arr);
  if (majorityElment == -1)
  {
    cout << "No majority element found." << endl;
  }
  else
  {
    cout << "The majority element is: " << majorityElment << endl;
  }
  return 0;
}