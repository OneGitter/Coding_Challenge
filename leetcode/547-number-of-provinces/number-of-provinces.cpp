class Solution {
public:


    void helper(int i, int n,vector<vector<int>>& isConnected,vector<bool>& v){
        if(v[i]) return;
        v[i] = true;

        for(int j=0;j<n;j++){
            if(i!=j && isConnected[i][j]==1){
                helper(j,n,isConnected,v);
            }
        }


    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> v(n,false);
        int ans = 0;


        for(int i=0;i<n;i++){
            if(!v[i]){
                helper(i,n,isConnected,v);
                ans++;
            }
        }


        return ans;

    }
};