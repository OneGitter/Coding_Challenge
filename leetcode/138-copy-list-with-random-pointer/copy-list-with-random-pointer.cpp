/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* ans = NULL;
        Node* t= NULL;

        map<Node*,Node*> m;


        while(head!=NULL){
            if(ans==NULL){
                m[head] = new Node(head->val);
                ans = m[head];
                if(head->random !=NULL){
                    if(m.find(head->random)==m.end()) m[head->random] = new Node(head->random->val);
                    ans->random = m[head->random];
                }

                t = ans;

                head=head->next;
            }
            else{
                if(m.find(head)==m.end()) m[head] = new Node(head->val);
                ans->next = m[head];
                ans=ans->next;
                if(head->random!=NULL){
                    if(m.find(head->random)==m.end()) m[head->random] = new Node(head->random->val);
                    ans->random = m[head->random];
                }

                head=head->next;
            }
        }



        return t;
    }
};