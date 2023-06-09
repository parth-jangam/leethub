//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int max_seq(string x, string y,int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i>=m || j>=n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int a=0;
        int b=0;
        if(x[i]==y[j]){
            a=1+max_seq(x,y,i+1,j+1,m,n,dp);
        }
        else{
            b=max(max_seq(x,y,i+1,j,m,n,dp),max_seq(x,y,i,j+1,m,n,dp));
        }
        return  dp[i][j]=max(a,b);
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int l=max_seq(X,Y,0,0,m,n,dp);
        int ans=l+(m-l)+(n-l);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends