/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* prev = nullptr;
        while(true){
            ListNode* slow_next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = slow_next;
            if(!fast->next){
                break;
            }
            fast = fast->next->next;
        }
        int maxNum = 0;
        while(slow && prev){
            maxNum = max(maxNum, slow->val + prev->val);
            slow = slow->next, prev = prev->next; 
        }
        return maxNum;
    }
};
// @lc code=end

