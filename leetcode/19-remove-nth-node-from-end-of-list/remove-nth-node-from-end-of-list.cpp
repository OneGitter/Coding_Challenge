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
        ListNode* p = NULL;
        ListNode* c = NULL;

        stack<ListNode*> st; 

        ListNode* t = head;


        while(t!=NULL){
            st.push(t);
            t=t->next;
        }

        if(n==st.size()){
            return head->next;
        }





        while(!st.empty()){
            if(n==1){
                st.pop();
                c = st.top();
                c->next = p;
                p=c;
                break;
            }
            else{
                p = st.top();
                st.pop();
                n--;
            }

        }


        return head;
    }
};