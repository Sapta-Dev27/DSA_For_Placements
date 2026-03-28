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

void preOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data ;
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data ;
  inOrder(root->right);
}

void postOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data ;
}

void levelOrder1(Node *root)
{
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();
    cout << curr->data ;
    if (curr->left != NULL)
    {
      q.push(curr->left);
    }
    if (curr->right != NULL)
    {
      q.push(curr->right);
    }
  }
}

void levelOrder2(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();
    if (curr == NULL)
    {
      if (!q.empty())
      {
        cout << endl;
        q.push(NULL);
      }
      else
      {
        break;
      }
    }
    if (curr != NULL)
    {
      cout << curr->data;

      if (curr->left != NULL)
      {
        q.push(curr->left);
      }
      if (curr->right != NULL)
      {
        q.push(curr->right);
      }
    }
  }
}

int main()
{
  vector<int> arr = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  int index = -1;
  Node *root = createBinaryTree(arr, index);
  preOrder(root);
  cout << endl ;
  inOrder(root);
  cout << endl ;
  postOrder(root);
  cout << endl ;
  levelOrder1(root);
  cout << endl ;
  levelOrder2(root);
  return 0;
}