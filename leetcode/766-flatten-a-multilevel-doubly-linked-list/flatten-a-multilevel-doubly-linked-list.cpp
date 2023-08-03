/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:

    Node* childLast(Node* head){
        Node* t = head;
        if(head->next==NULL && head->child==NULL) return head;
        Node* ans = NULL;

        while(t!=NULL){
            if(t->next==NULL) ans = t;
            if(t->child!=NULL){
                Node* n = t->next;
                Node* cl = childLast(t->child);
                Node* ch = t->child;
                t->child = NULL;
                t->next = ch;
                ch->prev = t;
                cl->next = n;
                if(n!=NULL){
                    n->prev = cl;
                }
                if(ans==t) ans = cl;
                t=n;
                continue;
            }
            t=t->next;
        }




        return ans;
    }



    Node* flatten(Node* head) {
        Node* t = head;

        while(t!=NULL){
            if(t->child!=NULL){
                Node* n = t->next;
                Node* cl = childLast(t->child);
                Node* ch = t->child;
                t->child = NULL;
                t->next = ch;
                ch->prev = t;
                cl->next = n;
                if(n!=NULL){
                    n->prev = cl;
                }
                t=n;
                continue;
            }
            t=t->next;
        }


        return head;
    }
};