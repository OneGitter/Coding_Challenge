class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber<=0) return "";

        string ans;

        while(columnNumber>0){
            columnNumber--;

            char a = (columnNumber%26) +'A';
            
            ans = a +ans;

            columnNumber /= 26;

        }


        return  ans;
    }
};