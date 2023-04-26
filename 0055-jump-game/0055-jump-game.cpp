class Solution {
public:
    bool jump(int init,vector<int>&nums,int n,vector<int>&dp){
    if(init>=n)return false;
    if(init>=n-1){
        return true;
    }
    if(dp[init]!=-1){
        return dp[init];
    }
    bool ans=false;
    for(int i=nums[init];i>0;i--){
         if(jump(init+i,nums,n,dp)){
             ans=true;
             break;
         }
    }
    return dp[init]=ans;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return jump(0,nums,n,dp);
    }
};