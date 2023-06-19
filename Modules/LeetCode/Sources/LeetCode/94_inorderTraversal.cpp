#include <LeetCode/94_inorderTraversal.h>
#include <queue>
#include <sstream>
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

n94_inorderTraversal::TreeNode* n94_inorderTraversal::stringToTreeNode(std::string input)
{
    if (!input.size()) {
        return nullptr;
    }

    std::string       item;
    std::stringstream ss;
    ss.str(input);

    getline(ss, item, ',');
    TreeNode*             root = new TreeNode(stoi(item));
    std::queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (true) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        if (!getline(ss, item, ',')) {
            break;
        }

        if (item != "null") {
            int leftNumber = stoi(item);
            node->left     = new TreeNode(leftNumber);
            nodeQueue.push(node->left);
        }

        if (!getline(ss, item, ',')) {
            break;
        }

        if (item != "null") {
            int rightNumber = stoi(item);
            node->right     = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}