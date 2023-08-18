/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traversal(TreeNode* node, int curD, int& maxD){
        if(node){
            maxD = max(maxD, curD);
            traversal(node->left, curD+1, maxD);
            traversal(node->right, curD+1, maxD);
        }
    }
    int maxDepth(TreeNode* root) {
        int maxD = 0;
        traversal(root, 1, maxD);
        return maxD;
    }
};
// @lc code=end

