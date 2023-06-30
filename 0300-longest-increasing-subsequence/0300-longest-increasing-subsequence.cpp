class Solution {
public:
    int max_len(vector<int>& nums,int i,int prev,vector<vector<int>>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[prev+1][i]!=-1){
            return dp[prev+1][i];
        }
        int take=0;
        int not_take=0;
        if(prev==-1 || nums[prev]<nums[i]){
            take=max(1+max_len(nums,i+1,i,dp),max_len(nums,i+1,prev,dp));
        }
        else{
            not_take=max_len(nums,i+1,prev,dp);
        }
        return dp[prev+1][i]= max(take,not_take);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+2,vector<int>(n+1,-1));
        return max_len(nums,0,-1,dp);
    }
};