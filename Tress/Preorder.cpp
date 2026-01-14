#include <bits/stdc++.h>
using namespace std;

class PreorderTraversal
{
public:
  struct Node
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
  void preorder(Node *root, vector<int> &arr)
  {
    if (root == NULL)
    {
      return;
    }
    arr.push_back(root->data);
    preorder(root->left, arr);
    preorder(root->right, arr);
  }
  vector<int> preorderTraversal(Node *root)
  {
    vector<int> arr;
    preorder(root, arr);
    return arr;
  }
};

int main()
{
  PreorderTraversal tree;
  PreorderTraversal::Node *root = new PreorderTraversal::Node(1);
  root -> left = new PreorderTraversal::Node(2);
  root -> right = new PreorderTraversal::Node(3); 
  root -> left -> left = new PreorderTraversal::Node(4);
  root -> left -> right = new PreorderTraversal::Node(5);
  root -> right -> left = new PreorderTraversal::Node(6);
  root -> right -> right = new PreorderTraversal::Node(7);

  vector<int>result = tree.preorderTraversal(root);
  int n= result.size();
  for(int i=0 ; i < n ; i++){
    cout << result[i] << " ";
  }
  return 0;
}