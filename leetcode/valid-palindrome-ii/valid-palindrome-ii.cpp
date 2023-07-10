class Solution {
public:

    bool helper(string s,int i ,int j){
        int ans = true;


        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                ans = false;
                break;
            }
        }

        return ans;
    }


    bool validPalindrome(string s) {
        int i =0;
        int j = s.length()-1;
        bool ans = true;


        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                ans = helper(s,i+1,j) || helper(s,i,j-1);
                break;
            }
        }

        return ans;
    }
};