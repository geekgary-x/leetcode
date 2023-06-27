#pragma once
#include <vector>
#include <string>
class TreeNode;
namespace n94_inorderTraversal {
TreeNode* stringToTreeNode(std::string input);
class Solution
{
public:
    void             inorder(TreeNode* root, std::vector<int>& res);
    std::vector<int> inorderTraversal(TreeNode* root);
};
}
