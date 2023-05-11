class Solution {
public:
    int max_count(int i,int j,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp){
        if(i>=nums1.size() || j>=nums2.size()){
            return 0;    
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int count=0;
        
        if(nums1[i]==nums2[j]){
            count=1+max_count(i+1,j+1,nums1,nums2,dp);
        }
        else{
            count+=max(max_count(i+1,j,nums1,nums2,dp),max_count(i,j+1,nums1,nums2,dp));
            
        }
        return dp[i][j]=count;
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n= nums2.size();
        vector<vector<int>>dp(m+1,vector<int>(n,-1));
        return max_count(0,0,nums1,nums2,dp);
    }
};