/*
 * @lc app=leetcode id=1448 lang=cpp
 *
 * [1448] Count Good Nodes in Binary Tree
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
    void traversal(TreeNode* node, int maxNum, int &count){
        if(node){
            if(node->val >= maxNum){
                count++;
                maxNum = node->val;
            }
            traversal(node->left,  maxNum, count);
            traversal(node->right, maxNum, count);
        }
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        traversal(root, INT_MIN, count);
        return count;
    }
};
// @lc code=end

