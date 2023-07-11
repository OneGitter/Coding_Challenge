class Solution {
public:

    string helper(string s){
        sort(s.begin(),s.end());
        return s;
    }



    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        vector<vector<string>> ans;



        for(int i =0;i<strs.size();i++){
            if(strs[i].length()>1){
                string t = helper(strs[i]);

                m[t].push_back(strs[i]);
            }
            else{
                m[strs[i]].push_back(strs[i]);
            }
        }


        for(auto i = m.begin();i!=m.end();i++){
            ans.push_back(i->second);
        }

        return ans;
    }
};