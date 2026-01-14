#include <bits/stdc++.h>
using namespace std;

class PostOrderTraversalClass
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

  void postorder(Node *root, vector<int> &arr)
  {
    if (root == NULL)
    {
      return;
    }
    postorder(root->left, arr);
    postorder(root->right, arr);
    arr.push_back(root->data);
  }

  vector<int> postordertraversal(Node *root)
  {
    vector<int> arr;
    postorder(root, arr);
    return arr;
  }
};

int main()
{
  PostOrderTraversalClass tree;
  PostOrderTraversalClass::Node *root = new PostOrderTraversalClass::Node(1);
  root->left = new PostOrderTraversalClass::Node(2);
  root->right = new PostOrderTraversalClass::Node(3);
  root->left->left = new PostOrderTraversalClass::Node(4);
  root->left->right = new PostOrderTraversalClass::Node(5);
  root->right->left = new PostOrderTraversalClass::Node(6);
  root->right->right = new PostOrderTraversalClass::Node(7);

  vector<int> result = tree.postordertraversal(root);

  int n = result.size();
  for (int i = 0; i < n; i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}