class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        long x = 1;


        while(n>=x){
            if(x==n){
                return true;
            }
            x *= 2;
        }


        return false;
    }
};