/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    void traversal(TreeNode* node, vector<int> &ans, int level){
        if(node){
            if(ans.size() < level){
            ans.push_back(node->val);
        }
        traversal(node->right, ans, level+1);
        traversal(node->left, ans, level+1);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        traversal(root, ans, 1);
        return ans;
    }
};
// @lc code=end

