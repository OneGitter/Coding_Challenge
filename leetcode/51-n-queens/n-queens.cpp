class Solution {
public:

    bool check(int row,int col,vector<string> b,int n){
        int i = row;
        int j = col;



        while(i<n){
            if(b[i][col]=='Q') return false;
            i++;
        }
        i=row;
        while(i>=0){
            if(b[i][col]=='Q') return false;
            i--;
        }
        i=row;
        while(j<n){
            if(b[row][j]=='Q') return false;
            j++;
        }
        j=col;
        while(j>=0){
            if(b[row][j]=='Q') return false;
            j--;
        }
        j=col;

        while(i<n && j<n){
            if(b[i][j]=='Q') return false;
            i++;
            j++;
        }
        i=row;
        j=col;

        while(i>=0 && j>=0){
            if(b[i][j]=='Q') return false;
            i--;
            j--;
        }
        i=row;
        j=col;

        while(i<n && j>=0){
            if(b[i][j]=='Q') return false;
            i++;
            j--;
        }
        i=row;
        j=col;

        while(i>=0 && j<n){
            if(b[i][j]=='Q') return false;
            i--;
            j++;
        }

        return true;

    }

    void helper(int col,vector<vector<string>>& ans,vector<string> board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int i=0;i<n;i++){
            if(check(i,col,board,n)){
                board[i][col]='Q';
                helper(col+1,ans,board,n);
                board[i][col]='.';
            }
        }
    }



    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));


        helper(0,ans,board,n);


        return ans;
    }
};