#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "Enter the no of elements in the array :" << endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the array elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i <= n; i++)
  {
    int flag = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[j] == i)
      {
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      cout << "The missing number is : " << i << endl;
      break;
    }
  }
  return 0;
}