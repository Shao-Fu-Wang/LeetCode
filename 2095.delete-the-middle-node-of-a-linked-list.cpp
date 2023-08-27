/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
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
    ListNode* deleteMiddle(ListNode* head) {
        int length = 0;
        for(const ListNode* node = head; node; node = node->next){  ++length;}
        length /= 2;
        if(length == 0){return nullptr;}
        int cnt = 0;
        for(ListNode* node = head; node; node = node->next){
            if(cnt == length-1){
                node->next = node->next->next;
                break;
            }
            cnt++;
        }
        return head;
    }
};
// @lc code=end

