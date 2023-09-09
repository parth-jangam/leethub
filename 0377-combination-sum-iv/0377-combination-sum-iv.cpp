class Solution {
public:
//     int counti(vector<int>& nums, int target,set<vector<int>>s,int sum,vector<int>temp,int i){
//         if(sum==target){
//             s.insert(temp);
//         }
//         if(sum>target || i>=nums.size()){
//             return;
//         }
        
//     }
    int counti(vector<int>& nums, int target,int sum,vector<int>&dp){
        if(target==sum){
            return 1;
        }
        if(sum>target){
             return 0;
        }
        if(dp[sum]!=-1){
            return dp[sum];
        }
        int take=0;
        for(int i=0;i<nums.size();i++){
            take+=counti(nums,target,sum+nums[i],dp);
        }
        return dp[sum]= take;
        
    }
    int combinationSum4(vector<int>& nums, int target) {
        // set<vector<int>>s;
        vector<int>dp(target,-1);
        return counti(nums,target,0,dp);
        
    }
};