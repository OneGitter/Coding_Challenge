class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        int mx =0;

        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)!= s.end()) continue;
            int cnt = 1;
            int n = nums[i]+1;
            while(s.find(n)!=s.end()){
                cnt++;
                n++;
            }
            mx = max(mx,cnt);
        }

        return mx;
    }
};