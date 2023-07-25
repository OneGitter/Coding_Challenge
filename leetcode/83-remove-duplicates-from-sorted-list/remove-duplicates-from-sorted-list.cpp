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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr;
        ListNode* t=head;

        while(t!=NULL){
            curr = t;
            t =t->next;
            while(t!=NULL && t->val==curr->val){
                t = t->next;
            }
            curr->next = t;
        }

        return head;
    }
};