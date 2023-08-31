class Solution {
public:


    void helper(int i,int n,string digits,string t,vector<string>& ans){
        if(i>=n){
            if(t.length()>0)ans.push_back(t);
            return;
        }
        if(digits[i]==1){
            helper(i+1,n,digits,t,ans);
        } 
        
        switch(digits[i]-'0'){
            case 2:
                helper(i+1,n,digits,t+"a",ans);
                helper(i+1,n,digits,t+"b",ans);
                helper(i+1,n,digits,t+"c",ans);
                break;
            case 3:
                helper(i+1,n,digits,t+"d",ans);
                helper(i+1,n,digits,t+"e",ans);
                helper(i+1,n,digits,t+"f",ans);
                break;
            case 4:
                helper(i+1,n,digits,t+"g",ans);
                helper(i+1,n,digits,t+"h",ans);
                helper(i+1,n,digits,t+"i",ans);
                break;
            case 5:
                helper(i+1,n,digits,t+"j",ans);
                helper(i+1,n,digits,t+"k",ans);
                helper(i+1,n,digits,t+"l",ans);
                break;
            case 6:
                helper(i+1,n,digits,t+"m",ans);
                helper(i+1,n,digits,t+"n",ans);
                helper(i+1,n,digits,t+"o",ans);
                break;
            case 7:
                helper(i+1,n,digits,t+"p",ans);
                helper(i+1,n,digits,t+"q",ans);
                helper(i+1,n,digits,t+"r",ans);
                helper(i+1,n,digits,t+"s",ans);
                break;
            case 8:
                helper(i+1,n,digits,t+"t",ans);
                helper(i+1,n,digits,t+"u",ans);
                helper(i+1,n,digits,t+"v",ans);
                break;
            case 9:
                helper(i+1,n,digits,t+"w",ans);
                helper(i+1,n,digits,t+"x",ans);
                helper(i+1,n,digits,t+"y",ans);
                helper(i+1,n,digits,t+"z",ans);
                break;
        }
    }


    vector<string> letterCombinations(string digits) {
        // if(digits.size()==0) return {};
        vector<string> ans;
        int n= digits.size();

        helper(0,n,digits,"",ans);

        return ans;
    }
};