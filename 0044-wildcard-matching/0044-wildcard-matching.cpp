class Solution {
public:
//     bool is_match(string s, string p,int i,int j,vector<vector<int>>&dp){
//         if(i<0 && j<0){
//             return true;
//         }
//         if(j<0 && i>=0){
//             return false;
//         }
//          if(i<0 && j>=0)
//         {
//             while(j>=0)
//             {
//                 if(p[j]=='*') j--;
//                 else return false;
//             }
//             return true;
//         }
// //         if(i<0 && j>=0){
// //             while(j>=0 && p[j]=='*'){
// //                 j--;
// //             }
// //             if(j<0){
// //                 return true;
// //             }
// //             return false;
            
// //         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         if(s[i]==p[j] || p[j]=='?'){
//             return dp[i][j]= is_match(s,p,i-1,j-1,dp);    
//         }
//         if(p[j]=='*'){
//             return dp[i][j]= is_match(s,p,i-1,j,dp) || is_match(s,p,i,j-1,dp);
//         }
        
//         return dp[i][j]= false;
        
//     }
//     bool isMatch(string s, string p) {
//         int m=s.length();
//         int n=p.length();
//         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
//         return is_match(s,p,m-1,n-1,dp);
//     }
    bool match(int i,int j,string &s,string &p,vector<vector<int>>&dp){
        if(i<0 && j<0){
            return true;
        }
        if(j<0 && i>=0){
            return false;
        }
         if(i<0 && j>=0)
        {
            while(j>=0)
            {
                if(p[j]=='*') j--;
                else return false;
            }
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // bool a,b;
        if(s[i]==p[j] || p[j]=='?'){
             return dp[i][j]=match(i-1,j-1,s,p,dp);
        }
        
        if(p[j]=='*'){
            return dp[i][j]=match(i-1,j,s,p,dp) || match(i,j-1,s,p,dp);
        }
        
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {

        int n=s.length();
        int m=p.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return match(n-1,m-1,s,p,dp);
    }
};