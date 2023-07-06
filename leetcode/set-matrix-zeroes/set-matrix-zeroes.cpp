class Solution {
public:


    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<bool>> v(m,vector(n,false));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        v[i][k] = true; 
                    }
                    for(int k=0;k<m;k++){
                        v[k][j]= true;
                    }
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]){
                    matrix[i][j] = 0;
                }
            }
        }


    }
};