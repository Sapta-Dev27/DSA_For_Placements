#include <bits/stdc++.h>
using namespace std;

class IterativePreOrder
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

  vector<int> preOrder(TreeNode *root)
  {
    vector<int> ans;
    if (root == NULL)
    {
      return ans;
    }
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
      TreeNode *node = st.top();
      ans.push_back(st.top()->val);
      st.pop();
      if (node->right != NULL)
      {
        st.push(node->right);
      }
      if (node->left != NULL)
      {
        st.push(node->left);
      }
    }
    return ans;
  }
};

int main()
{
  IterativePreOrder tree;
  IterativePreOrder::TreeNode *root = new IterativePreOrder::TreeNode(1);
  root->left = new IterativePreOrder::TreeNode(2);
  root->right = new IterativePreOrder::TreeNode(3);
  root->left->left = new IterativePreOrder::TreeNode(4);
  root->left->right = new IterativePreOrder::TreeNode(5);
  root->right->left = new IterativePreOrder::TreeNode(6);
  root->right->right = new IterativePreOrder::TreeNode(7);

  vector<int> result = tree.preOrder(root);
  for(int i=0 ; i < result.size() ; i++){
    cout << result[i] << " ";
  }
  return 0;
}