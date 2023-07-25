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
    int getDecimalValue(ListNode* head) {
     int ans = 0;
     vector<int> v;
     int j = 0;

     while(head!=NULL){
        v.push_back(head->val);
        head = head ->next;
     }   
     for(int i = v.size()-1;i>=0;i--){
        ans += v[i] * pow(2,j);
        j++;
     }

     return ans;
    }
};