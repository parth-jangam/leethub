//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximize(int n,int x,int y,int z,int ans,vector<int>&dp){
        // if(n<0){
        //     return INT_MIN;
        // }
        if(n==0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int seg1=INT_MIN;
        int seg2=INT_MIN;
        int seg3=INT_MIN;
        if(n>=x){
            seg1=maximize(n-x,x,y,z,ans,dp);
        }
        if(n>=y){
            seg2=maximize(n-y,x,y,z,ans,dp);
        }
        if(n>=z){
            seg3=maximize(n-z,x,y,z,ans,dp);
        }
        ans=1+max(seg3,max(seg1,seg2));
        return dp[n]= ans;
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int ans=-1;
        vector<int>dp(n+7,-1);
        int anss=maximize(n,x,y,z,ans,dp);
        if( anss<0){
            return 0;
        }
        return anss;
        
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends