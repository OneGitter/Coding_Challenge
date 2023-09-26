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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* p = NULL;
        ListNode* curr = head;
        ListNode* t;

        while(curr!=NULL){
            t=curr->next;
            curr->next=p;
            p=curr;
            curr=t;
        }

        return p;
        
    }
};