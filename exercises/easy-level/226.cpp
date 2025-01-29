// 226. Invert Binary Tree

#include <iostream>

using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *invertTree(TreeNode *root)
{
  if (root == nullptr)
    return nullptr;

  TreeNode *aux = root->left;

  root->left = root->right;
  root->right = aux;

  invertTree(root->left);
  invertTree(root->right);

  return root;
}

void printTree(TreeNode *root) {
  if (root == nullptr) return;
  cout << root->val << " ";
  printTree(root->left);
  printTree(root->right);
}

int main()
{
  TreeNode *root = new TreeNode(4);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(3);

  root->right = new TreeNode(7);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(9);

  cout << "Original tree: " << endl;
  cout << "[";
  printTree(root);
  cout << "]";

  TreeNode *resp = invertTree(root);

  cout << "Inverted tree: " << endl;
  cout << "[";
  printTree(resp);
  cout << "]";

  return 0;
}

/*
Example 1:
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]


Example 2:
Input: root = [2,1,3]
Output: [2,3,1]


Example 3:
Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/