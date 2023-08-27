/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
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
    TreeNode* deleteNode(TreeNode* root, int val) {
        if(!root){return nullptr;}
        
        if(val < root->val){
            root->left = deleteNode(root->left, val);
        } 
        else if(val > root->val){
            root->right = deleteNode(root->right, val);
        } 
        else{   // found
            if(!root->left && !root->right){
                return nullptr;
            }
            if(!root->left || !root->right){
                return root->left ? root->left : root->right;;
            }
            if(root->left && root->right){
                TreeNode *tmp = root->right;
                while (tmp->left) {
                    tmp = tmp->left;
                }
                root->val = tmp->val;
                // Here we call again to delete inorder successor
                // root->right = deleteNode(root->right, tmp->val);
            }
        }
        return root;
    }
};
// @lc code=end

