#pragma once
#include <vector>
#include <string>
namespace n94_inorderTraversal
{

struct TreeNode
{
    int       val;
    TreeNode* left;
    TreeNode* right;
    TreeNode()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {}
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x)
        , left(left)
        , right(right)
    {}
};
TreeNode* stringToTreeNode(std::string input);
class Solution
{
public:
    void             inorder(TreeNode* root, std::vector<int>& res);
    std::vector<int> inorderTraversal(TreeNode* root);
};
}
