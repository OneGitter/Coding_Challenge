class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;

        int i = a.length()-1;
        int j = b.length()-1;

        while(i>=0 && j>=0){
            int t = carry;
            t += a[i] - '0';
            t += b[j] - '0';
            switch(t){
                case 0:
                    ans= "0" + ans;
                    carry = 0;
                    break;
                
                case 1:
                    ans= "1" + ans;
                    carry = 0;
                    break;
                
                case 2:
                    ans= "0" + ans;
                    carry = 1;
                    break;
                
                case 3:
                    ans= "1" + ans;
                    carry = 1;
                    break;
            }
            i--;
            j--;
        }

    while(i>=0){
        int t = carry;
        t += a[i] - '0';
        switch(t){
            case 0:
                ans = "0" + ans;
                carry = 0;
                break;    
            case 1:
                ans = "1" + ans;
                carry = 0;
                break;
            case 2:
                ans = "0" + ans;
                carry = 1;
                break;
        }
        i--;
    }

    while(j>=0){
        int t = carry;
        t += b[j] - '0';
        switch(t){
            case 0:
                ans = "0" + ans;
                carry = 0;
                break;    
            case 1:
                ans = "1" + ans;
                carry = 0;
                break;
            case 2:
                ans = "0" + ans;
                carry = 1;
                break;
        }
        j--;
    }
    if(carry==1) ans = "1" + ans;

    return ans;
    }
};