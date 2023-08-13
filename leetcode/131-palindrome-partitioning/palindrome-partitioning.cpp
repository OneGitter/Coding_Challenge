class Solution {
public:


    bool check(string s,int l,int r){
        while(l<=r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    void helper(vector<vector<string>>&ans,vector<string> a,string s,int index){
        if(index==s.length()){
            ans.push_back(a);
            return;
        }

        for(int i=index;i<s.length();i++){
            if(check(s,index,i)){
                a.push_back(s.substr(index,i-index+1));
                helper(ans,a,s,i+1);
                a.pop_back();
            }
        }
    }



    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> a;

        helper(ans,a,s,0);


        return ans;
    }
};