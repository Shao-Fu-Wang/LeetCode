/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* currPtr = head;
        ListNode* nextPtr = head;
        ListNode* prevPtr = nullptr;
        while(currPtr != nullptr){
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;
            prevPtr = currPtr;
            currPtr = nextPtr;
        }
        return prevPtr;
    }
};
// @lc code=end

