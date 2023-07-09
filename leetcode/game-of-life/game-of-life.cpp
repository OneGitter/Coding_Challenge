class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int x[8] = {-1,-1,-1,0,0,1,1,1};
        int y[8] = {-1,0,1,-1,1,-1,0,1};
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> v(m,vector(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    int c = 0;
                    for(int k=0;k<8;k++){
                        if(i+x[k]>=0 && i+x[k]<m && j+y[k]>=0 && j+y[k]<n) c += board[i+x[k]][j+y[k]];
                    }
                    if(c==2 || c==3) v[i][j] = 1;
                }
                else{
                    int c = 0;
                    for(int k=0;k<8;k++){
                        if(i+x[k]>=0 && i+x[k]<m && j+y[k]>=0 && j+y[k]<n) c += board[i+x[k]][j+y[k]];
                    }
                    if(c==3) v[i][j] = 1;
                }

            }
        }

        board = v;
    }
};