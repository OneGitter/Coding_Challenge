class Solution {
public:
    string reverseWords(string s) {
        int i,j,k;
        int start=0;
        string ans;

        while(s[start]==' ') start++;
        j=s.length()-1;
        while(s[j]==' ') j--;
        i=j;

        while(i>start){
            if(s[i]==' '){
                k = i+1;
                while(k<=j){
                    ans += s[k++];
                }
                ans += ' ';
                i--;
                while(s[i]==' ')i--;
                j=i;
            }
            else{
                i--;
            }
        }
        while(i<=j){
            ans += s[i++];
        }

        
        return ans;
    }

};