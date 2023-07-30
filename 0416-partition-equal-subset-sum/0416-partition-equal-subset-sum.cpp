class Solution {
public:
    bool is_possible(int target,int i,vector<int>& nums,vector<vector<int>>&dp){
        if(target==0){
            return true;
        }
        if(i>=nums.size() || target<0){
            return false;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        return dp[i][target]= is_possible(target-nums[i],i+1,nums,dp) || is_possible(target,i+1,nums,dp);
    }
    bool canPartition(vector<int>& nums) {
        int i=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return is_possible(target,0,nums,dp);
    }
};