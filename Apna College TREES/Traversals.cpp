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
    left = right = NULL;
  }
};

Node *createBinaryTree(vector<int> &arr, int &index)
{
  index++;
  if (arr[index] == -1)
  {
    return NULL;
  }
  Node *root = new Node(arr[index]);
  root->left = createBinaryTree(arr, index);
  root->right = createBinaryTree(arr, index);
  return root;
}

void preOrder(Node * root){
  if( root == NULL){
    return ;
  }
  cout << root -> data << endl;
  preOrder(root -> left);
  preOrder(root -> right);
}

void inOrder(Node * root){
  if(root == NULL){
    return ;
  }
  inOrder(root -> left);
  cout << root -> data << endl ;
  inOrder(root -> right);
}

void postOrder(Node * root){
  if(root == NULL){
    return ;
  }
  postOrder(root -> left);
  postOrder(root -> right);
  cout << root -> data << endl;
}

int main(){
  vector<int>arr = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  int index = -1;
  Node *root = createBinaryTree(arr , index);
  preOrder(root);
  inOrder(root);
  postOrder(root);
  return 0;
}