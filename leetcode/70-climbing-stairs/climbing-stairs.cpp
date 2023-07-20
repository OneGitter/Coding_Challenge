class Solution {
public:

    int helper(int n,vector<int>& a){
        if(n<=0) return 0;
        if(a[n]!=INT_MAX) return a[n];

        a[n] = helper(n-1,a) + helper(n-2,a);

        return a[n];
    }

    int climbStairs(int n) {
        if(n<3) return n;
        vector<int> a(n+1,INT_MAX);
        a[0]= 0;
        a[1]= 1;
        a[2]= 2;
        return helper(n,a);
    }
};