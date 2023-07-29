class Solution {
public:
    int mini(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        if(i>=triangle.size()){
            return 0;
        }
        if(j>=triangle[i].size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int right=0,left=0;
        right= triangle[i][j]+mini(i+1,j,triangle,dp);
        left=triangle[i][j]+mini(i+1,j+1,triangle,dp);
        return dp[i][j]= min(right,left);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return mini(0,0,triangle,dp);
    }
};