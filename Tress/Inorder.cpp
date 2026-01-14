#include <bits/stdc++.h>
using namespace std;

class InorderTraversl
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

  void inorder(Node *root, vector<int>&arr)
  {
    if (root == NULL)
    {
      return;
    }
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
  }

  vector<int> inorderTraversal(Node *root)
  {
    vector<int> arr;
    inorder(root, arr);
    return arr;
  }
};

int main()
{
  InorderTraversl tree;
  InorderTraversl::Node *root = new InorderTraversl::Node(1);
  root->left = new InorderTraversl::Node(2);
  root->right = new InorderTraversl::Node(3);
  root->left->left = new InorderTraversl::Node(4);
  root->left->right = new InorderTraversl::Node(5);
  root->right->left = new InorderTraversl::Node(6);
  root->right->right = new InorderTraversl::Node(7);

  vector<int> result = tree.inorderTraversal(root);

  int n = result.size();
  for (int i = 0; i < n; i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}