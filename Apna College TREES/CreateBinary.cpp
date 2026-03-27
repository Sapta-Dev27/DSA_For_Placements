#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

Node *createBinaryTree(vector<int> &arr,int &index)
{
  index++;
  if (arr[index] == -1)
  {
    return NULL;
  }
  Node *root = new Node(arr[index]);
  root->left = createBinaryTree(arr,index);
  root->right = createBinaryTree(arr,index);
  return root;
}

int main()
{
  vector<int> arr = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  int index =-1 ;
  Node *root = createBinaryTree(arr,index);
  cout << root->data << endl;
  cout << root->left->data << endl;
  cout << root->right->data << endl;
  return 0;
}