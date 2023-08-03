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
        if(head==NULL) return head;
        ListNode* p = NULL;
        ListNode* c = head;
        ListNode* n = head->next;




        while(c!=NULL){
            if(n!=NULL && c->val==n->val){
                while(n!=NULL && c->val==n->val){
                    c=c->next;
                    n=n->next;
                }
                if(p==NULL) head=n;
                if(n==NULL && p!=NULL) p->next=NULL;
                c=n;
                if(n!=NULL) n=n->next;
            }
            else{
                if(p==NULL) p=c;
                else{
                    p->next=c;
                    p=c;
                }
                c=n;
                if(n!=NULL) n=n->next;
            }
        }


        return head;
    }
};