class Solution
{
public:
  vector<int> removeDuplicates(vector<int> &arr)
  {
    // code here
    vector<int> ans;
    int n = arr.size();
    int i = 0;
    int j = 1;
    while (j != n)
    {
      if (arr[i] != arr[j])
      {
        ans.push_back(arr[i]);
        i++;
        j++;
      }
      else
      {
        i++;
        j++;
      }
    }
    ans.push_back(arr[n - 1]);
    return ans;
  }
};

/*
intution :
T.C : 0(N)
S.C : 0(1)
Two pointers : i , j start traversing
*/