class Solution {
public:


    void fill(vector<vector<char>>& g,int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n ||g[i][j]=='0') return;

        g[i][j]='0';
        fill(g,i-1,j,m,n);
        fill(g,i+1,j,m,n);
        fill(g,i,j+1,m,n);
        fill(g,i,j-1,m,n);
    }



    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    fill(grid,i,j,m,n);
                }
            }
        }


        return count;
    }
};