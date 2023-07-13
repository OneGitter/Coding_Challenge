class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int count = 0;



        for(int i =0;i<nums.size();i++){
            if(nums[i]==count) count++;
            else break;

            while(i+1<nums.size() && nums[i]== nums[i+1]) i++;


        }

        return count;
    }
};