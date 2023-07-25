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
    bool helper(string s){
        int n = s.length();
        int i = 0;
        int j = n-1;

        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }

        return true;
        
    }
    bool isPalindrome(ListNode* head) {
        string ans;

        while(head!=NULL){
            ans += head->val;
            head = head->next;
        }

        return helper(ans);
    }
};