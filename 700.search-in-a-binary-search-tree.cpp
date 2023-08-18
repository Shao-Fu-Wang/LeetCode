/*
 * @lc app=leetcode id=700 lang=cpp
 *
 * [700] Search in a Binary Search Tree
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
class Solution{
public:
    TreeNode* traversal(TreeNode* node, int val){
        if (node == nullptr || val == node->val){
            return node;
        }
        if (val < node->val){
            return traversal(node->left, val);
        } 
        else{
            return traversal(node->right, val);
        }
    }

    TreeNode* searchBST(TreeNode* root, int val){
        return traversal(root, val);
    }
};
// @lc code=end

