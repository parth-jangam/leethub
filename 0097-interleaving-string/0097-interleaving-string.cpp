class Solution {
public:
    int is_match(int i1,int i2,int i3,string s1,string s2,string s3,vector<vector<vector<int>>>&dp){
        if(i1==s1.length() && i2==s2.length() && i3==s3.length()){
            return 1;
        }
        if(i3==s3.length()){
            return 0;
        }
        if(dp[i1][i2][i3]!=-1){
            return dp[i1][i2][i3];
        }
        int a=0;
        int b=0;
        if(i1<s1.length() && s1[i1]==s3[i3]){
            a=is_match(i1+1,i2,i3+1,s1,s2,s3,dp);
        }
        if(i2<s2.length() && s2[i2]==s3[i3]){
            b=is_match(i1,i2+1,i3+1,s1,s2,s3,dp);
            
        }
        return dp[i1][i2][i3]= a || b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int i1=s1.length();
        int i2=s2.length();
        int i3=s3.length();
        vector<vector<vector<int>>>dp(i1+1,vector<vector<int>>(i2+1,vector<int>(i3+1,-1)));
        return is_match(0,0,0,s1,s2,s3,dp);
    }
    
};