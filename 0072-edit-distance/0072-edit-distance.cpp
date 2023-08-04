class Solution {
public:
    int mini_op(string word1, string word2,int i,int j,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return 0;
        }
        if(i<0 ){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take=1e9;
        if(word1[i]==word2[j]){
            take=mini_op(word1,word2,i-1,j-1,dp);
        }
        int not_take=1+min(mini_op(word1,word2,i-1,j,dp),min(mini_op(word1,word2,i,j-1,dp),mini_op(word1,word2,i-1,j-1,dp)));
        return dp[i][j]= min(take,not_take);
    }
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        vector<vector<int>>dp(m+2,vector<int>(n+2,-1));
        return mini_op(word1,word2,m-1,n-1,dp);
    }
};