#include <gtest/gtest.h>
#include <LeetCode/94_inorderTraversal.h>
#include "LeetCode/TreeNode.h"
TEST(LEETCODE, n94_inorderTraversal)
{
    std::string      line   = "1,null,2,3";
    TreeNode*        root   = TreeNode::stringToTreeNode(line);
    std::vector<int> result = n94_inorderTraversal::Solution().inorderTraversal(root);

    std::vector<int>                expected = {1, 3, 2};
    EXPECT_EQ(result, expected);
}