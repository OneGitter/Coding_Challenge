class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int enr = matrix.size()-1;
        int enc = matrix[0].size()-1;
        vector<int> ans;
        int str=0,stc=0;
        int i;
        
        while(str<=enr || stc<=enc){
            i=stc;
            while(i<=enc && str<=enr){
                ans.push_back(matrix[str][i]);
                i++;
            }
            str++;
            i=str;
            while(i<=enr && stc<=enc){
                ans.push_back(matrix[i][enc]);
                i++;
            }
            enc--;
            i=enc;
            while(i>=stc && str<=enr){
                ans.push_back(matrix[enr][i]);
                i--;
            }
            enr--;
            i=enr;
            while(i>=str && stc<=enc){
                ans.push_back(matrix[i][stc]);
                i--;
            }
            stc++;
        }

        return ans;
    }
};