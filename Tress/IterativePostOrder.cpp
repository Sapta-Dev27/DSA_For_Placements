#include <bits/stdc++.h>
using namespace std;

class InterativePostOrder
{
public:
  struct TreeNode
  {
  public:
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

  vector<int> postOrder(TreeNode *root)
  {
    vector<int> ans;
    if (root == NULL)
    {
      return ans;
    }
    stack<TreeNode *>st1;
    stack<TreeNode *>st2;
    st1.push(root);
    while(!st1.empty()){
      st2.push(st1.top());
      TreeNode *node = st1.top();
      st1.pop();
      if(node -> left !=NULL){
        st1.push(node -> left);
      }
      if(node -> right != NULL){
        st1.push(node -> right);
      }
    }
    while(!st2.empty()){
      ans.push_back(st2.top() -> val);
      st2.pop();
    }
    return ans;
  }
};

int main()
{
  InterativePostOrder tree;
  InterativePostOrder::TreeNode *root = new InterativePostOrder::TreeNode(1);
  root->left = new InterativePostOrder::TreeNode(2);
  root->right = new InterativePostOrder::TreeNode(3);
  root->left->left = new InterativePostOrder::TreeNode(4);
  root->left->right = new InterativePostOrder::TreeNode(5);
  root->right->left = new InterativePostOrder::TreeNode(6);
  root->right->right = new InterativePostOrder::TreeNode(7);

  vector<int> result = tree.postOrder(root);
  for(int i=0 ; i < result.size() ; i++){
    cout << result[i] << " ";
  }
  return 0;   
}