class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    int n1 = ransomNote.length();  // ransom string length
    int n2 = magazine.length();    // magazine string length
    unordered_map<char, int> map1; // store the elements into map1
    unordered_map<char, int> map2; // store the elements into map2
    for (int i = 0; i < n1; i++)
    {
      map1[ransomNote[i]]++; // hash into the map1
    }
    for (int i = 0; i < n2; i++)
    {
      map2[magazine[i]]++; // hash into map2
    }
    for (auto it1 : map1)
    {                                  // iterate over map1
      auto it2 = map2.find(it1.first); // check if each element in map1 either present in map2
      if (it2 != map2.end())
      { // if so
        if (it2->second >= it1.second)
        {           // if freq map2 greater >= than the freq1 greater
          continue; // continue
        }
        else
        {
          return false; // return false
        }
      }
      else
      {
        return false; // return false
      }
    }
    return true; // return true
  }
};

/*
EXPLANATION :
T.C : 0(3N)
S.C: 0(1) as 0(26) = constant 
*/