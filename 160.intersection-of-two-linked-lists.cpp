/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode *head){
        int len = 0;
        for(;head!=nullptr; head = head->next, ++len);
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* intersect = new ListNode;
        intersect = nullptr;
        int lengthA = getLength(headA), lengthB = getLength(headB);
        int lengthDiff = abs(lengthA - lengthB);
        while(lengthDiff){
            (lengthA > lengthB) ? headA=headA->next : headB=headB->next;
            --lengthDiff;
        }
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        for(; ptrA!=nullptr; ptrA=ptrA->next, ptrB=ptrB->next){
            if(ptrA == ptrB){
                intersect = ptrA;
                break;
            }
        }
        return intersect;
    }
};
// @lc code=end

