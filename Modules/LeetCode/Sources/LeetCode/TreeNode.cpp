#include "LeetCode/TreeNode.h"
#include <string>
#include <vector>
#include <queue>
#include <sstream>
TreeNode* TreeNode::stringToTreeNode(std::string input)
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