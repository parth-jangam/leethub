class Solution {
public:
    int mini(int i,int j,int m,int n,vector<vector<int>>& matrix,vector<vector<int>>&dp){
        if(i==m-1 && j>=0 && j<n){
            return matrix[i][j];
        }
        if(i<0 || j<0 || i>=m || j>=n){
            return 1e9;
        }
        if(dp[i][j]!=1e9){
            return dp[i][j];
        }
        int p=0,q=0,r=0;
        p=matrix[i][j]+mini(i+1,j-1,m,n,matrix,dp);
        q=matrix[i][j]+mini(i+1,j,m,n,matrix,dp);
        r=matrix[i][j]+mini(i+1,j+1,m,n,matrix,dp);
        return dp[i][j]= min(p,min(q,r));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            dp[m-1][j]=matrix[m-1][j];
        }
        
        
        for(int i=m-2;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int p=0,q=0,r=0;
                
                if(j>0){p=matrix[i][j]+dp[i+1][j-1];}
                else {p=1e9;}
                q=matrix[i][j]+dp[i+1][j];
                if(j+1<n){r=matrix[i][j]+dp[i+1][j+1];}
                else{r=1e9;}
                dp[i][j]= min(p,min(q,r));
            }
        }
        for(int k=0;k<n;k++){
            // int res=;
            ans=min(ans,dp[0][k]);
        }
        return ans;
    }
};