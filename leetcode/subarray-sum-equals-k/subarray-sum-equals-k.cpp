class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int sum =0;
        int ans = 0;
        int n = nums.size();


        m[0] = 1;

        for(int i=0;i<n;i++){
            sum += nums[i];


        
            if(m.find(sum-k)!=m.end()) ans += m[sum-k];
            

            
            if(m.find(sum)!=m.end()) m[sum]++;
            else m[sum] = 1;

        }


        return ans;

    }
};