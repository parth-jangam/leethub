class Solution {
public:
    int maxi_sub(vector<int>&nums,int i,int prev,vector<vector<int>>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int a=0;
        int b=0;
        if(prev==-1 || nums[prev]<nums[i]){
            a=max(1+maxi_sub(nums,i+1,i,dp),maxi_sub(nums,i+1,prev,dp));
        }
        else{
            b=maxi_sub(nums,i+1,prev,dp);
        }
        return dp[i][prev+1]=max(a,b);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return maxi_sub(nums,0,-1,dp);
    }
};