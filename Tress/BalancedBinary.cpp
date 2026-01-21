#include <bits/stdc++.h>
using namespace std;

class BalancedBinaryTree
{
public:
  struct TreeNode
  {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
      val = data;
      left = NULL;
      right = NULL;
    }
  };
  int height(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    int left = height(root->left);
    if (left == -1)
    {
      return -1;
    }
    int right = height(root->right);
    if (right == -1)
    {
      return -1;
    }
    if (abs(left - right) > 1)
    {
      return -1;
    }
    return 1 + max(left, right);
  }
  bool balancedTree(TreeNode *root)
  {
    int check = height(root);
    if (check == -1)
    {
      return false;
    }
    else
    {
      return true;
    }
  }
};

int main()
{
  BalancedBinaryTree b1;
  BalancedBinaryTree::TreeNode *root = new BalancedBinaryTree::TreeNode(1);
  root->left = new BalancedBinaryTree::TreeNode(2);
  root->right = new BalancedBinaryTree::TreeNode(3);
  root->left->left = new BalancedBinaryTree::TreeNode(4);
  root->left->right = new BalancedBinaryTree::TreeNode(5);
  root->right->left = new BalancedBinaryTree::TreeNode(6);
  root->right->right = new BalancedBinaryTree::TreeNode(7);

  if (b1.balancedTree(root))
  {
    cout << "TRUE" << endl;
  }
  else
  {
    cout << "FALSE" << endl;
  }
  return 0;
}