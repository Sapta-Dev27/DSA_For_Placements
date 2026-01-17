#include <bits/stdc++.h>
using namespace std;

vector<int>countNGE(vector<int>arr,vector<int>indices){
  int n1= indices.size();
  int n2 = arr.size();
  vector<int>ans;
  for(int i =0 ; i < n1 ; i++){
    int value = arr[indices[i]];
    int count =0;
    for(int j= indices[i] ; j < n2 ; j++){
      if( arr[j] > value){
        count++;
      }
    }
    ans.push_back(count);
  }
  return ans;
}

int main(){
  vector<int>arr = {4,5,2,10,8};
  vector<int>indices = {0,2,3};
  vector<int>result = countNGE(arr,indices);
  for(auto x: result){
    cout<<x<<" ";
  }
  return 0;
}