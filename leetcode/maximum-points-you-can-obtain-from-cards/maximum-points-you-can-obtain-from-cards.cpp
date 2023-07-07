class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        int n = cardPoints.size();
        int cur = 0; 

        for(int i=0;i<k;i++){
            total += cardPoints[i];
        }


        int ans  = total;


        for(int i=k-1;i>=0;i--){
            total -= cardPoints[i];
            total += cardPoints[n-k+i];
            ans = max(ans,total);
        }



        return ans;



    }
};