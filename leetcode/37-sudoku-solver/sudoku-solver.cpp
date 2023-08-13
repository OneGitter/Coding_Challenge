class Solution {
public:


    bool check(vector<vector<char>>& board,int row,int col,char c,int n){
        for(int i=0;i<n;i++){
            if(board[row][i]==c) return false;
            if(board[i][col]==c) return false;
        }
        int rs;
        int cs;

        if(row<3) rs=0;
        else if(row<6) rs=3;
        else rs=6;
        if(col<3) cs=0;
        else if(col<6) cs=3;
        else cs=6;


        for(int i=rs;i<rs+3;i++){
            for(int j=cs;j<cs+3;j++){
                if(board[i][j]==c) return false;
            }
        }


        return true;



    }


    void helper(vector<vector<char>>& board,int i,int j,bool& r,int n){
        bool last = false;
        if(j==n-1) last = true;
        if(i==n){
            r = true;
            return;
        }
        if(board[i][j]!='.'){
            if(last) helper(board,i+1,0,r,n);
            else helper(board,i,j+1,r,n);
            return;
        }

        for(int z =1;z<=n;z++){
            if(check(board,i,j,'0'+z,n)){
                board[i][j]= '0'+z;
                if(last) helper(board,i+1,0,r,n);
                else helper(board,i,j+1,r,n);
                if(r) return;
                board[i][j]= '.';
            }
        }




    }


    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size();
        bool r =false;

        helper(board,0,0,r,n);
    }
};