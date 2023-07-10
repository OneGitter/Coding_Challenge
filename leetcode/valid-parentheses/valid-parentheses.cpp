class Solution {
public:
    bool isValid(string s) {
        stack<char> p;

        for(int i =0;i<s.length();i++){
            switch(s[i]){
                case '(':
                case '[':
                case '{':
                    p.push(s[i]);
                    break;
                case ')':
                    if(p.empty() || p.top() != '('){
                        return false;
                    }
                    p.pop();
                    break;
                case ']':
                    if(p.empty() || p.top() != '['){
                        return false;
                    }
                    p.pop();
                    break;
                case '}':
                    if(p.empty() || p.top() != '{'){
                        return false;
                    }
                    p.pop();
                    break;
                
            }
        }

        return p.empty();
    }
};