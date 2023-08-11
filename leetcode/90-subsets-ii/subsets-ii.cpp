class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;

        ans.push_back({});
        s.insert({});

        for(int i=0;i<nums.size();i++){
            int n = ans.size();
            for(int j=0;j<n;j++){
                vector<int> a = ans[j];
                a.push_back(nums[i]);
                sort(a.begin(),a.end());
                if(s.find(a)==s.end()){
                    s.insert(a);
                    ans.push_back(a);
                }
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};