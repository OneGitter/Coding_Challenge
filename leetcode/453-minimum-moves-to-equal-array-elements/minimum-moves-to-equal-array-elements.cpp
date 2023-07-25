class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn= nums[0];
        for(int i=0;i<nums.size();i++){
            mn = min(mn,nums[i]);
        }
        int ans =0;
        for(int i =0;i<nums.size();i++){
            ans += nums[i] - mn;
        }

        return ans;
    }
};