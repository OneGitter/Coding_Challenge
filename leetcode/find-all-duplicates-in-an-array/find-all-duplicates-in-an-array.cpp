class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;

        for(int i =0;i<n;i++){
            nums[nums[i]%n] += n;
        }


        for(int i =0;i<n;i++){
            if(nums[i]> 2*n){
                if(i==0) v.push_back(n);
                else v.push_back(i);
            }
        }

        
        return v;


    }
};