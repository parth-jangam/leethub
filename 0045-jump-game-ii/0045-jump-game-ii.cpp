class Solution {
public:
      int minimum(int init,vector<int>&nums,int min_count,int n,vector<int>&dp){
        
        if(init>=n-1){
            return 0;
        }
        // if(init==0){
        //     return INT_MAX;
        // }
        if(dp[init]!=-1){
            return dp[init];
        }
        int count=INT_MAX;
        for(int i=nums[init];i>0;i--){
            count=1+minimum(init+i,nums,min_count,n,dp);
            min_count=min(min_count,count);
        }
        return dp[init]=min_count;
    } 
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int min_count=100000;
        return minimum(0,nums,min_count,n,dp);
    }
};