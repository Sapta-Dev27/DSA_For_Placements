#include <iostream>
using namespace std;
#include <climits> 

int main()
{
  int n;
  cout << "Enter the no of the array elements :" << endl;
  cin >> n;
  if ( n < 2) {
    cout << "Need more than 2 elements to find the second smallest element";
    return -1;
  }
  int arr[n];
  cout << "Enter the array elements : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int smallest = INT_MAX;
  int second_smallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < smallest)
    {

      second_smallest = smallest;
      smallest = arr[i];
    }
    else if (second_smallest > arr[i] && arr[i] != smallest)
    {
      second_smallest = arr[i];
    }
  }
  cout << "Smallest element is : " << smallest << endl;
  cout << "Second smallest element is : " << second_smallest << endl;
  return 0;
}