class Solution {
public:
    int max_sub(vector<vector<int>>pairs,int m,int n,int i,vector<vector<vector<int>>>&dp){
      
        if(n==0 && m==0){
            return 0;
        }
        if(i>=pairs.size()){
            return 0;
        }
        if(dp[i][m][n]!=0){
            return dp[i][m][n];
        }
        int take=0;
        int not_take=0;
        if(m-pairs[i][0]>=0 && n-pairs[i][1]>=0){
            take=max(1+max_sub(pairs,m-pairs[i][0],n-pairs[i][1],i+1,dp),max_sub(pairs,m,n,i+1,dp));
        }
        else{
            not_take=max_sub(pairs,m,n,i+1,dp);
        }
        return dp[i][m][n]= max(take,not_take);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>pairs;
        
        for(int i=0;i<strs.size();i++){
            int c_0=0;
            int c_1=0;
            for(int j=0;j<strs[i].length();j++){
                if(strs[i][j]=='1'){
                    c_1++;
                }
                else{
                    c_0++;
                }
            }
            pairs.push_back({c_0,c_1});
        }
        int x=pairs.size();
        vector<vector<vector<int>>>dp(x+1,vector<vector<int>>(m+1,vector<int>(n+1,0)));
        
        
        for(int i=x-1;i>=0;i--){
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n;k++){
                    int take=0;
                    int not_take=0;
                    if(j>=pairs[i][0] && k>=pairs[i][1]){
                        take=max(1+dp[i+1][j-pairs[i][0]][k-pairs[i][1]],dp[i+1][j][k]);
                    
                    }
                    else{
                        not_take=dp[i+1][j][k];
                    }
                     dp[i][j][k]= max(take,not_take);
                
                
                }
            }
        }
        
        
        
        
        int ans=dp[0][m][n];
        if(ans==-1000){
            return 0;
        }
        return ans;
        
        
        
        
    }
};