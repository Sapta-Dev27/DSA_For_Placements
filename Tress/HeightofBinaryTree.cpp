#include <bits/stdc++.h>
using namespace std;

class HeightBinary{
  public :
  struct TreeNode {
    public:
    int val;
    TreeNode *left ;
    TreeNode *right ;
    TreeNode(int data){
       val = data ;
       left = NULL ;
       right = NULL;
    }
  };
  int heightBinaryTree(TreeNode *root){
    if(root==NULL){
      return 0;
    }
    int left = heightBinaryTree(root->left);
    int right = heightBinaryTree(root->right);
    return 1+ max(left,right);
  }
};

int main(){
  HeightBinary h1;
  HeightBinary::TreeNode *root = new HeightBinary::TreeNode(1);
  root->left = new HeightBinary::TreeNode(2);
  root->right = new HeightBinary::TreeNode(3);
  root->left->left = new HeightBinary::TreeNode(4);
  root->left->right = new HeightBinary::TreeNode(5);
  root->right->left = new HeightBinary::TreeNode(6);
  root->right->right = new HeightBinary::TreeNode(7);

  int count = h1.heightBinaryTree(root);
  cout << 'Height is :' << count ;
}