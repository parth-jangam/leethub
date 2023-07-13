class Solution {
public:
    bool possible(int size,vector<int>&nums,int i,int prev){
        
        if(size==0){
            return true;
        }
        if(i==nums.size()){
            return false;
        }
        bool a=false,b=false;
        if(prev==-1 || nums[i]>nums[prev]){
            a= possible(size-1,nums,i+1,i) || possible(size,nums,i+1,prev);
        }
        else{
            b=possible(size,nums,i+1,prev);
        }
        return a|| b;
    }
    bool increasingTriplet(vector<int>& nums) {
        
        // return possible(3,nums,0,-1);
        
        vector<int>dp;
        dp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            // 
            if(nums[i]>dp.back()){
                dp.push_back(nums[i]);
            }
            else{
                int ind=lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
                dp[ind]=nums[i];
            }
        }
        if(dp.size()>=3){
            return true;
        }
        return false;
        
    }
};