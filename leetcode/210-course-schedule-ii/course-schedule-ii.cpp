class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int> ind(n,0);
        queue<int> q;
        vector<int> ans;
        vector<vector<int>> adj(n);

        for(auto j:prerequisites){
            ind[j[0]]++;
            adj[j[1]].push_back(j[0]);
        }

        for(int i=0;i<n;i++){
            if(ind[i]==0) q.push(i);
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto it:adj[node]){
                ind[it]--;
                if(ind[it]==0)q.push(it);
            }

            ans.push_back(node);


        }

        if(ans.size()==n) return ans;

        return {};

    }
};