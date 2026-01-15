#include <bits/stdc++.h>
using namespace std;

class LevelOrderTraversal
{
public:
  struct TreeNode
  {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x, TreeNode *l, TreeNode *r)
    {
      val = x;
      left = l;
      right = r;
    };
    TreeNode(int x)
    {
      val = x;
      left = NULL;
      right = NULL;
    };
  };

  vector<vector<int>> levelOrder(TreeNode *root)
  {
    vector<vector<int>> ans;
    if (root == NULL)
    {
      return ans;
    }
    vector<int> level;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
      int size = q.size();
      for (int i = 0; i < size; i++)
      {
        TreeNode *node = q.front();
        q.pop();
        if (node->left != NULL)
        {
          q.push(node->left);
        }
        if (node->right != NULL)
        {
          q.push(node->right);
        }
        level.push_back(node->val);
      }
      ans.push_back(level);
    }
    return ans;
  }
};

int main()
{
  LevelOrderTraversal lot;
  LevelOrderTraversal::TreeNode *root = new LevelOrderTraversal::TreeNode(1);
  root->left = new LevelOrderTraversal::TreeNode(2);
  root->right = new LevelOrderTraversal::TreeNode(3);
  root->left->left = new LevelOrderTraversal::TreeNode(4);
  root->left->right = new LevelOrderTraversal::TreeNode(5);
  root->right->left = new LevelOrderTraversal::TreeNode(6);
  root->right->right = new LevelOrderTraversal::TreeNode(7);
  vector<vector<int>> result = lot.levelOrder(root);

  for(int i= 0 ; i < result.size() ; i++){
    for(int j=i; j < result[i].size() ; j++){
      cout<<result[i][j]<<" ";
    }
  }
  return 0;

}