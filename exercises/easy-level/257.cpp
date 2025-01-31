// 257. Binary Tree Paths

#include <iostream>
#include <vector>

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

void explorePaths(TreeNode *root, vector<string> &resp, string txt)
{
  if (root == nullptr) return;

  if (root->left == nullptr && root->right == nullptr) {
    string val = to_string(root->val);
    txt += val;
    cout << "txt: " << txt << endl;
    resp.push_back(txt);
    return;
  }

  string aux = to_string(root->val);
  txt += aux + "->";

  explorePaths(root->left, resp, txt);
  explorePaths(root->right, resp, txt);
}

vector<string> binaryTreePaths(TreeNode *root)
{
  vector<string> resp;
  explorePaths(root, resp, "");
  return resp;
}

int main()
{
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->right = new TreeNode(5);
  binaryTreePaths(root);

  cout << "test1: " << endl;
  TreeNode *test1 = new TreeNode(1);
  binaryTreePaths(test1);

  return 0;
}

/*
Example 1:
Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]


Example 2:
Input: root = [1]
Output: ["1"]


Constraints:

The number of nodes in the tree is in the range [1, 100].
-100 <= Node.val <= 100
*/