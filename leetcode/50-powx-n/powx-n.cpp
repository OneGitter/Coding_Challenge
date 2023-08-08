class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) return (double) 1/ (double) (x*pow(x,(n+1)*-1));
        if(n==0) return 1;
        if(n%2==0) return pow(x*x,n/2);
        else return x*pow(x,n-1);
    }
};