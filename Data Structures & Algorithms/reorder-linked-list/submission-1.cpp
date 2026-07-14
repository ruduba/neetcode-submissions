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
    void reorderList(ListNode* head) {

        // find middle
        // reverse 2nd half
        // merge the two halves

        if(!head || !head->next || !head->next->next) return;

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        } 

        ListNode *prev = nullptr;
        ListNode *cur = slow->next;
        slow->next = prev;

        while(cur){
            ListNode *tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }

        ListNode *first = head;
        ListNode *second = prev;

        while(second){
            ListNode *nf = first->next;
            ListNode *ns = second->next;

            first->next = second;
            second->next = nf;

            first = nf;
            second = ns;
        }

    }
};
