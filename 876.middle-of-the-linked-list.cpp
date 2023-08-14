/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        ListNode* prevPtr = head;
        ListNode* currptr = head;
        int findMid = 0;
        while(currptr != nullptr){
            findMid++;
            prevPtr = currptr;
            currptr = currptr->next;
        }
        findMid /= 2;
        for(int cnt = 0; head!= nullptr; head=head->next, cnt++){
            if(cnt == findMid){
                return head;
            }
        }
        return nullptr;
    }
};
// @lc code=end

