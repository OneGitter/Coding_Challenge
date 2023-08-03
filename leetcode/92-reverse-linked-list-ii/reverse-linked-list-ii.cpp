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


    pair<ListNode*,ListNode*> rev(ListNode* head){
        ListNode* ans = NULL;
        ListNode* t = head;


        while(t!=NULL){
            if(ans==NULL){
                ans = t;
                t = t->next;
                ans->next = NULL;
            }
            else{
                ListNode* s = t->next;
                t->next = ans;
                ans = t;
                t = s;

            }

        }
 
        return {ans,head};
    }





    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* ans = head;
        ListNode* bstart = NULL;
        ListNode* start = NULL;
        ListNode* afinish = NULL;
        int count= 1;



        while(ans!=NULL){
            if(count==left-1) bstart = ans;
            if(count==left) start = ans;
            if(count==right+1) afinish = ans;
            if(count==right){
                ListNode* t = ans->next;
                ans->next = NULL;
                ans = t;
                count++;
                continue;
            }
            count++;
            ans= ans->next;
        }



        pair<ListNode*,ListNode*> p = rev(start);

        if(bstart) bstart->next=p.first;
        if(afinish) p.second->next=afinish;


        if(left==1) return p.first;


        return head;

    }
};