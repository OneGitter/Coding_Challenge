class Solution {
public:
    int reverse(int x) {
        bool check = false;

        if(x==INT_MIN || x==INT_MAX) return 0;

        if(x<0){
            x *= -1;
            check = true;
        }


        long ans = x%10;
        x/=10;

        while(x>0){
            ans *= 10;
            if(ans>INT_MAX){
                return 0;
                
            }
            ans += x%10;
            x /= 10;
        }


        if(check) ans *= -1;



        return ans;







    }
};