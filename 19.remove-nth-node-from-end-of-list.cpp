/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slowPtr = head, *fastPtr = head;
        int slowCnt = 0, fastCnt = 0;
        for(int i = 0; i < n; i++) fastPtr=fastPtr->next;
        if(fastPtr == nullptr){
            head=head->next;
            return head;
        }
        while(fastPtr->next != nullptr) {
            fastPtr=fastPtr->next;
            slowPtr=slowPtr->next;
        }
        slowPtr->next = slowPtr->next->next;
        return head;
    }
};
// @lc code=end

