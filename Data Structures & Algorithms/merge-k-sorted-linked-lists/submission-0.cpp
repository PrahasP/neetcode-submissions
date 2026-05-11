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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> number_holder;
        
        for(ListNode* head : lists){
            ListNode* pointer = head;
            while(pointer != nullptr){
                number_holder.push_back(pointer->val);
                pointer = pointer->next;
            }
        }

        if(number_holder.empty()) return nullptr;
        sort(number_holder.begin(), number_holder.end());

        ListNode dummy(0);
        ListNode* tail = &dummy;

        for(int i = 0; i < number_holder.size(); i++){
            tail->next = new ListNode(number_holder[i]);
            tail = tail->next;
        }

        return dummy.next;
    }
};
