#include <bits/stdc++.h>
using namespace std;

class InterativeInOrder
{
public:
  struct TreeNode
  {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
      val = x;
      left = NULL;
      right = NULL;
    }
  };

  vector<int> inOrder(TreeNode *root)
  {
    vector<int> ans;
    stack<TreeNode *> st;
    if (root == NULL)
    {
      return ans;
    }
    TreeNode *node = root;
    while (true)
    {
      if (node != NULL)
      {
        st.push(node);
        node = node->left;
      }
      else
      {
        if(st.empty()){
          break;
        }
        node = st.top();
        ans.push_back(node -> val);
        st.pop();
        node= node -> right;
      }
    }
    return ans;
  }
};

int main()
{
  InterativeInOrder tree;
  InterativeInOrder::TreeNode *root = new InterativeInOrder::TreeNode(1);
  root->left = new InterativeInOrder::TreeNode(2);
  root->right = new InterativeInOrder::TreeNode(3);
  root->left->left = new InterativeInOrder::TreeNode(4);
  root->left->right = new InterativeInOrder::TreeNode(5);
  root->right->left = new InterativeInOrder::TreeNode(6);
  root->right->right = new InterativeInOrder::TreeNode(7);

  vector<int> result = tree.inOrder(root);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}