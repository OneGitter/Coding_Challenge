class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        long x = pow(2,i);


        while(n>=x){
            if(x==n) return true;
            x = pow(2,i++);
        }


        return false;
    }
};