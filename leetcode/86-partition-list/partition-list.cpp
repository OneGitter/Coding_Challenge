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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return head;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;



        while(head!=NULL){
            if(head->val<x){
                if(a==NULL){
                    a=head;
                    c=a;
                    head=head->next;
                    c->next=NULL;
                }
                else{
                    a->next=head;
                    a=head;
                    head=head->next;
                    a->next=NULL;
                }
            }
            else{
                if(b==NULL){
                    b=head;
                    d=b;
                    head=head->next;
                    d->next=NULL;
                }
                else{
                    b->next=head;
                    b=head;
                    head=head->next;
                    b->next=NULL;
                }
            }



        }
            if(a) a->next=d;
            if(b) b->next=NULL;


            if(a==NULL) return d;

            return c;
    }
};