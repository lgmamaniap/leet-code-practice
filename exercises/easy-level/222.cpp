// 222. Count Complete Tree Nodes

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

int countNodes(TreeNode *root)
{
  if (root == nullptr)
    return 0;

  int count = 1;

  if (root->left != nullptr)
    count += countNodes(root->left);

  if (root->right != nullptr)
    count += countNodes(root->right);

  return count;
}

int main()
{
  TreeNode* tree1 = new TreeNode(1);
  tree1->left = new TreeNode(2);
  tree1->right = new TreeNode(3);
  tree1->left->left = new TreeNode(4);
  tree1->left->right = new TreeNode(5);
  tree1->right->left = new TreeNode(6);
  cout << countNodes(tree1) << endl;

  TreeNode* tree2 = nullptr;
  cout << countNodes(tree2) << endl;

  TreeNode* tree3 = new TreeNode(1);
  cout << countNodes(tree3) << endl;

  return 0;
}

/*
Example 1:


Input: root = [1,2,3,4,5,6]
Output: 6


Example 2:

Input: root = []
Output: 0


Example 3:

Input: root = [1]
Output: 1


Constraints:

The number of nodes in the tree is in the range [0, 5104].
0 <= Node.val <= 5104
The tree is guaranteed to be complete.
*/