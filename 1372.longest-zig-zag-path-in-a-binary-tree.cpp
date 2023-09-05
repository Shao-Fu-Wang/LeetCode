/*
 * @lc app=leetcode id=1372 lang=cpp
 *
 * [1372] Longest ZigZag Path in a Binary Tree
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
    int max_length = 0;
    int longestZigZag(TreeNode* root) {
        dfs(root, false, 0); // go right
        dfs(root, true, 0); // go left
        return max_length;
    }
    
    void dfs(TreeNode* node, bool is_right, int cur_length) {
        if (!node) return;
        max_length = max(max_length, cur_length);
        
        if (is_right) { // go right
            dfs(node->right, false, cur_length + 1);
            dfs(node->left, true, 1);
        }
        else{   // go left
            dfs(node->left, true, cur_length + 1);
            dfs(node->right, false, 1);
        }
    }
};
// @lc code=end

