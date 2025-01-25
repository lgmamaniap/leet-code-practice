// 100. Same tree

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
bool isSameTree(TreeNode* p, TreeNode* q) {
    // If both nodes are NULL, they are identical
    if (p == NULL && q == NULL) {
        return true;
    }
    // If only one of the nodes is NULL, they are not identical
    if (p == NULL || q == NULL) {
        return false;
    }
    // Check if values are equal and recursively check left and right subtrees
    if (p->val == q->val) {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    // Values are not equal, they are not identical
    return false;
}

TreeNode* a = nullptr;
TreeNode* b = nullptr;

int main()
{
  TreeNode* a = new TreeNode(1);
  a->left = new TreeNode(2);
  a->right = new TreeNode(3);
  
  TreeNode* b = new TreeNode(1);
  b->left = new TreeNode(2);
  b->right = new TreeNode(3);
  
  cout << isSameTree(a, b) << endl;
  
  a->val = 1;
  a->left = new TreeNode(2);
  a->right = nullptr;
  
  b->val = 1;
  b->left = nullptr;
  b->right = new TreeNode(2);
  
  cout << isSameTree(a, b) << endl;
  
  a->val = 1;
  a->left = new TreeNode(2);
  a->right = new TreeNode(1);
  
  b->val = 1;
  b->left = new TreeNode(1);
  b->right = new TreeNode(2);
  
  cout << isSameTree(a, b) << endl;
  
  return 0;
}


/*
Example 1:


Input: p = [1,2,3], q = [1,2,3]
Output: true



Example 2:


Input: p = [1,2], q = [1,null,2]
Output: false



Example 3:


Input: p = [1,2,1], q = [1,1,2]
Output: false
 

Constraints:

The number of nodes in both trees is in the range [0, 100].
-104 <= Node.val <= 104
*/
