/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cmpPtr = nullptr;
        ListNode* newNode = new ListNode;
        ListNode* head = new ListNode;
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        if(list1&&list2){
            if(list1->val<list2->val)  {
                head = list1;
                list1 = list1->next;
            }
            else{
                head = list2;
                list2 = list2->next;
            }
        }
        ListNode* ans = head;
        for(ListNode* list1Ptr=list1, *list2Ptr=list2; list1Ptr || list2Ptr;){
            if(list1Ptr == nullptr){ans->next = list2Ptr; break;}
            if(list2Ptr == nullptr){ans->next = list1Ptr; break;}
            else if(list1Ptr->val <= list2Ptr->val){
                ans->next = list1Ptr;
                list1Ptr = list1Ptr->next;
            }
            else{
                ans->next = list2Ptr;
                list2Ptr = list2Ptr->next;
            }
            ans = ans->next;
        }
        return head;
    }
};
// @lc code=end

