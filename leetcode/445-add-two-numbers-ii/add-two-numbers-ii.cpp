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


    ListNode* rev(ListNode* head){
        ListNode* ans = NULL;


        while(head!=NULL){
            if(ans == NULL){
                ans = head;
                head = head->next;
                ans->next = NULL;
            }
            else{
                ListNode* t = head->next;
                head->next = ans;
                ans = head;
                head = t;
            }
        }

        return ans;
    }


    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = rev(l1);
        ListNode* p1=NULL;
        ListNode* c1=l1;

        l2=rev(l2);
        ListNode* p2=NULL;
        ListNode* c2=l2;





        int c =0;
        int t;
        int sum;


        while(c1!=NULL && c2!=NULL){
            sum = c + c1->val +c2->val;
            c = sum/10;
            c2->val = sum%10;
            c1->val = sum%10;
            p1=c1;
            p2=c2;
            c1=c1->next;
            c2=c2->next;
        }

        while(c1!=NULL){
            sum = c + c1->val;
            c = sum/10;
            c1->val = sum%10;
            p1=c1;
            c1=c1->next;
            t = true;
        }
        while(c2!=NULL){
            sum = c + c2->val;
            c = sum/10;
            c2->val = sum%10;
            p2=c2;
            c2=c2->next;
            t = false;
        }
        if(c!=0){
            if(t) p1->next = new ListNode(c);
            else p2->next = new ListNode(c);

        }

        if(t) return rev(l1);

        return rev(l2);
    }
};