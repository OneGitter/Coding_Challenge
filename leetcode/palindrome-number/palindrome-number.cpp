class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int y = x;
        long ans=0;

        ans += y%10;
        y /= 10;

        while(y>0){
            ans *= 10;
            ans += y%10;
            y /= 10;
        }


        return ans==x;
    }
};