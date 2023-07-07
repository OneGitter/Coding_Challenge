class Solution {
public:


    bool helper(vector<int>& nums,int i,int n){
        if(i>=n) return true;
        if(nums[i]<=0) return false;

        return helper(nums,i+nums[i],n) or helper(nums,i+1,n);


    }


    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> v(n,false);



        for(int i =n-1;i>=0;i--){
            if(i+nums[i]>=n-1){
                v[i] = true;
            }
            else{
                int t = nums[i];


                while(t>0){
                    if(v[i+t]){
                        v[i]=true;
                        break;
                    }
                    t--;
                }
            }
        }


        return v[0];
        

    }
};