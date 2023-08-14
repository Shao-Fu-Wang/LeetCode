/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry = 0;
        int size1 = 0, size2 = 0;
        for (ListNode* iter1 = l1, *iter2 = l2; iter1 != nullptr || iter2 != nullptr; iter1 = iter1 ? iter1->next : nullptr, iter2 = iter2 ? iter2->next : nullptr) {
            if (iter1) size1++;
            if (iter2) size2++;
        }
        if (size1 < size2) {
            ListNode* temp = l1;
            l1 = l2;
            l2 = temp;
        }
        ListNode* newHead = l1;
        ListNode* prevTail = nullptr;
        for (; l1 != nullptr || l2 != nullptr;) {
            if (l1 != nullptr) {
                l1->val = l1->val + (l2 != nullptr ? l2->val : 0) + carry;
                carry = 0;
                if (l1->val >= 10) {
                    l1->val %= 10;
                    carry = 1;
                }
                prevTail = l1;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }
        if(carry){
            ListNode* newTail = new ListNode(1);
            prevTail->next = newTail;
        }
        return newHead;
    }
};
// @lc code=end

