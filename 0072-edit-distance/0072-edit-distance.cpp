class Solution {
public:
    int max_lcs(string word1, string word2,int i,int j,vector<vector<int>>&dp){
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int match=INT_MAX;
        int not_match=INT_MAX;
        if(word1[i]==word2[j]){
            match=max_lcs(word1,word2,i-1,j-1,dp);
        }
        else{
            not_match=1+min(max_lcs(word1,word2,i-1,j,dp),min(max_lcs(word1,word2,i,j-1,dp),max_lcs(word1,word2,i-1,j-1,dp)));
        }
        return dp[i][j]= min(match,not_match);
    }
    int minDistance(string word1, string word2) {
        int i=word1.length()-1;
        int j=word2.length()-1;
        vector<vector<int>>dp(i+2,vector<int>(j+2,-1));
        
        return max_lcs(word1,word2,i,j,dp);
    }
};