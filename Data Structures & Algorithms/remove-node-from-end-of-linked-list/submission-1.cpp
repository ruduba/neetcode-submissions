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
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* f = dummy;
        ListNode* s = dummy;

        for(int i = 0; i<=n; i++){
            s = s->next;
        }

        while(s){
            f = f->next;
            s = s->next;
        }

        ListNode* tmp = f->next;
        f->next = f->next->next;

        

        return dummy->next;
        
    }
};
