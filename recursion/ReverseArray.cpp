#include <bits/stdc++.h>
using namespace std;

void swap(int &num1, int &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void reverse(vector<int> &ans, int l, int r)
{
  if (l > r)
  {
    return;
  }
  swap(ans[l], ans[r]);
  reverse(ans , l + 1, r - 1);
}

int main()
{
  vector<int> ans = {1, 2, 3, 4, 5, 6};
  reverse(ans, 0, ans.size() - 1);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
  return 0;
}