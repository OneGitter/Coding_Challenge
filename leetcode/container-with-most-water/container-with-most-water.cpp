class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l =0;
        int r = arr.size() -1;
        int ans = INT_MIN;

        while(l<r){
            if(arr[l]<arr[r]){
                ans = max(ans,(r-l)*arr[l]);
                l++;
            }
            else{
                ans = max(ans,(r-l)*arr[r]);
                r--;
            }
        }


        return ans;

    }
};