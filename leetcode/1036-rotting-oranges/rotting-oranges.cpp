class Solution {
public:


    void helper(int i,int j,int t,int m,int n,queue<vector<int>> &q,vector<vector<int>> &v){
        if(i<0 || i>=m || j<0 || j>=n || v[i][j]==2 || v[i][j]==0) return;
        v[i][j] = 2;
        q.push({i,j,t+1});
    }


    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> v(m,vector(n,1));
        queue<vector<int>> q;
        int ans = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    v[i][j]=0;
                }
                if(grid[i][j]==2){
                    v[i][j] = 2;
                    q.push({i,j,0});
                }
            }
        }

        while(!q.empty()){
            vector<int> node = q.front();
            q.pop();
            ans = max(ans,node[2]);

            helper(node[0]+1,node[1],node[2],m,n,q,v);
            helper(node[0]-1,node[1],node[2],m,n,q,v);
            helper(node[0],node[1]+1,node[2],m,n,q,v);
            helper(node[0],node[1]-1,node[2],m,n,q,v);

        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==1) return -1;
            }
        }

        return ans;

    }
};