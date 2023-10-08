class Solution {
public:
    int maxi(vector<int>& nums1, vector<int>& nums2,int i,int j,bool flag,vector<vector<vector<int>>>&dp){
        if(i>=nums1.size() || j>=nums2.size()){
            if(flag==0){
                return -1e9;
            }
            return 0;
        }
        if(dp[i][j][flag]!=-1){
            return dp[i][j][flag];
        }
        int not_take=max(maxi(nums1,nums2,i+1,j,flag,dp),maxi(nums1,nums2,i,j+1,flag,dp));
        int take=(nums1[i]*nums2[j])+maxi(nums1,nums2,i+1,j+1,1,dp);
        
        return dp[i][j][flag]= max(take,not_take);
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        bool flag=0;
        int m=nums1.size();
        int n=nums2.size();
        
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(3,-1)));
         return maxi(nums1,nums2,0,0,flag,dp);   
    }
};