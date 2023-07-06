class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i,j,k;
        i=0;
        j=0;
        k=n-1;

        while(i<n){
            if(nums[i] ==0){
                if(j>i){
                    i++;
                    continue;
                }
                swap(nums[i],nums[j]);
                j++;
            }
            else if(nums[i]==2){
                if(i>k){
                    i++;
                    continue;
                }
                swap(nums[i],nums[k]);
                k--;
            }
            else
                i++;
        }
    }
};