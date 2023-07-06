class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans  = 0;
        int n = nums.size();

        if(n==1) return n;

        for(int i=0;i<n;i++){
            nums[ans] = nums[i];
            ans++;

            while(i<n-1 && nums[i]==nums[i+1]) i++;
            
        }

        return ans;
    }
};