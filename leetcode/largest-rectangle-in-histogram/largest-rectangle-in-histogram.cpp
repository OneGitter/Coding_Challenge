class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> s;
        int ans = INT_MIN;
        int i;
        int count;


        for(i=0;i<heights.size();i++){
            count = i;
            while(!s.empty() && s.top().second>heights[i]){
                ans = max(ans,(i-s.top().first)*s.top().second);
                count  = min(count,s.top().first);
                s.pop();
            }
            s.push({count,heights[i]});
        }

        while(!s.empty()){
            ans = max(ans,(i-s.top().first)*s.top().second);
            s.pop();
        }


        return ans;
    }
};