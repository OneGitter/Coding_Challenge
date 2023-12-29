class Solution {
public:

  int helper(int i,int j,string s,string t,vector<vector<int>>& v){
    if(i<0 || j<0)return 0;
    if(v[i][j]!=-1)return v[i][j];
    if(s[i]==t[j]){
      int a = helper(i-1,j-1,s,t,v)+1;
      int b = helper(i,j-1,s,t,v);
      return v[i][j]=max(a,b);
    }
    int c = helper(i-1,j,s,t,v);
    int d = helper(i,j-1,s,t,v);

    return v[i][j]=max(c,d);
  }


    int longestCommonSubsequence(string text1, string text2) {
        if(text1==text2)return text1.length();
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> v(m+1,vector(n+1,0));

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1] )v[i][j] = 1+v[i-1][j-1];
                else{
                    v[i][j] = max(v[i-1][j],v[i][j-1]);
                }
            }
        }

        return v[m][n];
    }
};