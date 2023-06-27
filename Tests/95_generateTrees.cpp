#include "LeetCode/TreeNode.h"
#include <LeetCode/95_generateTrees.h>
#include <gtest/gtest.h>
TEST(LEETCODE, n95_generateTrees)
{
    std::string      line   = "1,null,2,3";
    TreeNode*        root   = TreeNode::stringToTreeNode(line);
    std::string      test   = TreeNode::treeNodeToString(root);
    std::cout << test << std::endl;
}