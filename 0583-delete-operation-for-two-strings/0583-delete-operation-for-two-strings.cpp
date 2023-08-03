class Solution {
public:
    int mini(string word1, string word2,int i,int j,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return 0;
        }
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(word1[i]!=word2[j]){
            return dp[i][j]= 1+min(mini(word1,word2,i-1,j,dp),mini(word1,word2,i,j-1,dp));
        }
        else{
            return dp[i][j]= mini(word1,word2,i-1,j-1,dp);
        }
        
    }
    int minDistance(string word1, string word2) {
           int m=word1.length();
        int n=word2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
           return mini(word1,word2,m-1,n-1,dp);
    }
};