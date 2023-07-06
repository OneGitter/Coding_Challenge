class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int n = prices.size();

        vector<int> v(n);

        v[0] = 0;




        for(int i=1;i<n;i++){
            if(prices[i]<min) min = prices[i];

            v[i] = max(v[i-1],prices[i]-min);
        }

        return v[n-1];
    }
};