/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> m;


        while(headA!=NULL && headB!=NULL){
            if(m.find(headA)!=m.end()) return headA;
            m[headA]++;
            if(m.find(headB)!=m.end()) return headB;
            m[headB]++;
            headA = headA->next;
            headB = headB->next;
        }

        while(headA!=NULL){
            if(m.find(headA)!=m.end()) return headA;
            m[headA]++;
            headA = headA->next;
        }
        while(headB!=NULL){
            if(m.find(headB)!=m.end()) return headB;
            m[headB]++;
            headB = headB->next;
        }


        return NULL;
    }
};