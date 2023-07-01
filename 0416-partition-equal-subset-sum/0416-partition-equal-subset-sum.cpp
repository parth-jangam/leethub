class Solution {
public:
    bool is_pos(vector<int>& nums,int sum,int i,vector<vector<int>>&dp){
        if(sum==0){
            return true;
        }
        if(i>=nums.size())return false;
        if(sum<0)return false;
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        bool take=false;
        if(sum>=nums[i]){
            take=is_pos(nums,sum-nums[i],i+1,dp);
        }
        bool not_take=is_pos(nums,sum,i+1,dp);
        return dp[i][sum]= take || not_take;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int i=0;
        while(i<nums.size()){
            sum+=nums[i];
            i++;
        }
        if(sum%2!=0){
            return false;
        }
        sum/=2;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return is_pos(nums,sum,0,dp);
        
    }
};