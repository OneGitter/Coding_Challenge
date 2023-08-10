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

    int helper1(ListNode* head){
        if(head==NULL) return 0;

        int count= 0;

        while(head!=NULL){
            count++;
            head=head->next;
        }


        return count;

    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;

        int length=helper1(head);

        k=k%length;


        int count=0;

        ListNode* left = head;

        while(count<k){
            left=left->next;
            count++;
        }

        ListNode* right = head;

        while(left->next!=NULL){
            left=left->next;
            right=right->next;
        }
        left->next=head;
        head=right->next;
        right->next=NULL;

        return head;
    }
};