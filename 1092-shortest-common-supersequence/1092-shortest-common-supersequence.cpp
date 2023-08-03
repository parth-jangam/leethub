class Solution {
public:
    int maxi(string str1,string str2,int i,int j,vector<vector<int>>&dp){
        if(i>=str1.length() || j>=str2.length()){
            return 0;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int match=0;
        if(str1[i]==str2[j]){
            match=1+maxi(str1,str2,i+1,j+1,dp);
        }
        int not_match=max(maxi(str1,str2,i+1,j,dp),maxi(str1,str2,i,j+1,dp));
        return dp[i][j]= max(not_match,match);
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.length();
        int n=str2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int match=0;
                if(str1[i]==str2[j]){
                    match=1+dp[i+1][j+1];
                }
                int not_match=max(dp[i+1][j],dp[i][j+1]);
                dp[i][j]= max(not_match,match);
            }
        }
        // cout<<dp[0][0];
        // cout<<ans;
        int i=0;
        int j=0;
        string ans="";
        while(i<m && j<n){
            if(str1[i]==str2[j]){
                ans+=str1[i];
                i++;
                j++;
            }
            else{
                if(dp[i+1][j]<dp[i][j+1]){
                    j++;
                }
                else{
                    i++;
                }
            }
        }
        i=0;
        int k=0;
        j=0;
        string finans="";
        while(i<ans.size()){
            
            while(j<str1.size() && ans[i]!=str1[j]){
                finans+=str1[j];
                j++;
                
            }
            while(k<str2.size() && ans[i]!=str2[k]){
                finans+=str2[k];
                k++;
            }
            finans+=ans[i];
            i++;
            j++;
            k++;
        }
        while(j<str1.size()){
                finans+=str1[j];
                j++;
        }
        while(k<str2.size()){
                finans+=str2[k];
                k++;
        }
        // cout<<ans;
         return finans;
    }
    
};