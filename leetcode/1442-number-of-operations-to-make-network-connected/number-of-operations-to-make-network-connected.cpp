class Solution {
public:

    int dfs(int i,vector<vector<int>>&adj,vector<int>&v){
        if(v[i]!=-1) return 0;
        v[i]=1;
        int ans =0;
        for(auto x:adj[i]){
            ans += dfs(x,adj,v);
        }

        return ans+1;
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;

        vector<vector<int>> adj(n);
        vector<int> v(n,-1);

        for(auto x:connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int ans=0;
        int sum = 0;

        for(int i=0;i<n;i++){
            if(v[i]==-1){
                sum += dfs(i,adj,v);
                if(sum<n)ans++;
            }
        }    

        return ans;
    }
};