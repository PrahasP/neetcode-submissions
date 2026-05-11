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
        if(!head) return head;

        ListNode* node = head;
        int size = 1;

        while(node->next != nullptr){
            size++;
            node = node->next;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        for(int i = 0; i < size - n; i++){
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return dummy.next;
    }
};
