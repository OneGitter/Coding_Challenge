class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> m;
        int n = nums.size();

        int sum = 0;
        int ans = 0;


        m[0] = 1;


        for(int i=0;i<n;i++){
            sum += nums[i];


            if(m.find((sum%k+k)%k)!=m.end()){
                ans += m[(sum%k+k)%k]++;
                continue;
            }
            
            m[(sum%k+k)%k] =1;


        }
        
        return ans;
    }
};