class Solution {
public:
    long long summi(vector<int>& nums,int i,int flag,vector<vector<long long>>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }
        long long even=0;
        // int odd=0;
        if(flag==0){
            even+=max(nums[i]+summi(nums,i+1,1,dp),summi(nums,i+1,0,dp));
        }
        else{
            even+=max(-nums[i]+summi(nums,i+1,0,dp),summi(nums,i+1,1,dp));
        }
        // ans=max(ans,even-odd);
        return dp[i][flag]=even;
    }
    long long maxAlternatingSum(vector<int>& nums) {
        // int ans=-10;
        long long n=nums.size();
        vector<vector<long long>>dp(n+1,vector<long long>(2,-1));
        return summi(nums,0,0,dp);
    }
};