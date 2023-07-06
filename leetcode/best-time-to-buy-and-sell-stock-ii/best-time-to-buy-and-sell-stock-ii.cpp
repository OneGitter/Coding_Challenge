class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        int ans = 0;

        st.push(prices[0]);

        for(int i=1;i<n;i++){
            if(st.top()>prices[i]){
                if(st.size()>1){
                    int a = st.top();
                    st.pop();

                    ans += a-st.top();
                    st.pop();
                    st.push(prices[i]);
                }
                else{
                    st.pop();
                    st.push(prices[i]);
                }
            }
            else{
                if(st.size() > 1){
                    st.pop();
                    st.push(prices[i]);
                }
                else{
                    st.push(prices[i]);
                }
            }
        }

        if(st.size()>1){
            int a = st.top();
            st.pop();
            ans += a-st.top();
            st.pop();
        }


        return ans;
    }
};