class Solution {
public:
    bool isHappy(int n) {
        unsigned long long a =n;
        

        map<int,int> m;

        m[1]++;


        while(m.find(a)==m.end()){

            m[a]++;

            unsigned long long t = 0;


            t+= pow(a%10,2);
            a /= 10;


            while(a>0){
                t+=pow(a%10,2);
                a /= 10;
            }

            a=t;




        }
        
        if(a==1) return true;


        return false;
    }
};