#include <LeetCode/94_inorderTraversal.h>
#include <queue>
#include <sstream>
#include "LeetCode/TreeNode.h"
void n94_inorderTraversal::Solution::inorder(TreeNode* root, std::vector<int>& res)
{
    if (!root) return;
    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
}
std::vector<int> n94_inorderTraversal::Solution::inorderTraversal(TreeNode* root)
{
    std::vector<int> res;
    inorder(root, res);
    return res;
}