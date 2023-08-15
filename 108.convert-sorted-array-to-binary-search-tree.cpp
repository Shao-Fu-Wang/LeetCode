/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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
    TreeNode* dfs(vector<int>& nums, int low , int high){
        if(low > high){
            return nullptr;
        }
        else{
            int mid = (low + high)/2;
            TreeNode* newNode = new TreeNode(nums[mid]);
            newNode->left = dfs(nums, low, mid-1);
            newNode->right = dfs(nums, mid+1, high);
            return newNode;
        }
        return nullptr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return dfs(nums, 0, n-1);
    }
};
// @lc code=end

