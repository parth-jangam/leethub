class Solution {
public:
    bool checker(string s,int i,int p,vector<vector<int>>&dp){
        
        if(i>=s.length() && p==0){
            return true;
        }
        if(i>=s.length()){
            return false;
        }
        if(p<0){
            return false;
        }
        if(dp[i][p+100]!=-1){
            return dp[i][p+100];
        }
        bool take=false;
        if(s[i]=='('){
            
            take= checker(s,i+1,p+1,dp);
        }
        else{
            if(s[i]=='*'){
                
                take=take || checker(s,i+1,p+1,dp);
                take=take || checker(s,i+1,p,dp);
                take=take || checker(s,i+1,p-1,dp);
                // return dp[i][p+100]= a || b || c; 
            }
            else{
                take=take || checker(s,i+1,p-1,dp);
                
            }
        }
        
        return dp[i][p+100]= take;
        
        
        
    }   
    bool checkValidString(string s) {
        // stack<char>p;
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(210,-1));
        int p=0;
        return checker(s,0,p,dp);
    }
};