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
        ListNode dummy(0);
        ListNode* answer = &dummy;

        while(list1 && list2){
            if(list1->val < list2->val){
                answer->next = list1;
                list1 = list1->next;
            } else {
                answer->next = list2;
                list2 = list2->next;
            }
            answer = answer->next;
        }

        if(!list1){
            answer->next = list2;
        } else {
            answer->next = list1;
        }

        return dummy.next;
    }
};
