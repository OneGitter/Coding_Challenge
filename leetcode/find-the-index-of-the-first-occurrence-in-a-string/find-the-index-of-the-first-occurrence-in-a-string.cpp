class Solution {
public:
    int strStr(string haystack, string needle) {
        bool ans = false;
        int n = haystack.length();
        int m = needle.length();


        for(int i=0;i<n;i++){
            int j=0;
            if(haystack[i]==needle[j]){
                int k = i;
                while(j<m && haystack[k]==needle[j]){
                    k++;
                    j++;
                }
                if(j==m) return i;
            }
        }
        return -1;
    }
};