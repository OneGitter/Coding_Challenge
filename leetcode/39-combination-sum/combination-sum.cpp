class Solution {
public:

    void helper(vector<int> &c,int t,int s,int i,vector<int>a,set<vector<int>>&ans){
        if(s==t) ans.insert(a);

        if(i==c.size()) return;


        if(s+c[i]<=t){
            a.push_back(c[i]);
            helper(c,t,s+c[i],i,a,ans);
            a.pop_back();
        }

        helper(c,t,s,i+1,a,ans);

    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> a;
        vector<vector<int>> b;

        helper(candidates,target,0,0,a,ans);

        for(auto t:ans){
            b.push_back(t);
        }

        return b;
    }
};