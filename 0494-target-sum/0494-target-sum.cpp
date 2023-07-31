class Solution {
public:
    int ways(vector<int>& nums,int i, int target,int sum,vector<vector<int>>&dp){
        if(i==nums.size() && sum==target){
            return 1;
        }
        if(i==nums.size())return 0;
        if(dp[i][sum+1000]!=-1){
            return dp[i][sum+1000];
        }
        
        return dp[i][sum+1000]= ways(nums,i+1,target,sum-nums[i],dp)+ways(nums,i+1,target,sum+nums[i],dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n+2,vector<int>(2004,-1));
        return ways(nums,0,target,0,dp);
    }
};
