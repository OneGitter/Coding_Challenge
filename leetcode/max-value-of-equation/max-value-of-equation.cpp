class Solution {
public:

    class compare{
        public:
            bool operator()(pair<int,int> &a,pair<int,int> &b){
                return a.second<b.second;
            }
    };


    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int ans = INT_MIN;
        int n = points.size();

        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;


        


        for(int i=0;i<n;i++){
            while((!pq.empty()) && points[i][0] - pq.top().first > k){
                pq.pop();
            }
            if(!pq.empty()){
                ans = max(ans,points[i][0] + points[i][1] + pq.top().second);
            }
            pq.push({points[i][0],points[i][1]-points[i][0]});
        }






        return ans;
    }
};