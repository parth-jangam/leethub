//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void movement(vector<string>&ans,string &temp,vector<vector<int>>&m,int n,int i,int j){
        if(i>=n || j>=n ){
            return;
        }
        if(i==n-1 && j==n-1){
            ans.push_back(temp);
            return;
        }
        if(i>0 && i<n && j>=0 && j<n && m[i-1][j]!=0){
            temp.push_back('U');
            
            m[i][j]=0;
            movement(ans,temp,m,n,i-1,j);
            temp.pop_back();
            m[i][j]=1;
        }
        if(i>=0 && i<n && j<n-1 && j>=0 && m[i][j+1]!=0){
            temp.push_back('R');
            m[i][j]=0;
            movement(ans,temp,m,n,i,j+1);
            temp.pop_back();
            m[i][j]=1;
        }
        if(i<n-1 && i>=0 && j<n && j>=0 && m[i+1][j]!=0){
            temp.push_back('D');
            m[i][j]=0;
            movement(ans,temp,m,n,i+1,j);
            temp.pop_back();
            m[i][j]=1;
        }
        if(i>=0 && i<n && j>0 && j<n && m[i][j-1]!=0){
            temp.push_back('L');
            m[i][j]=0;
            movement(ans,temp,m,n,i,j-1);
            temp.pop_back();
            m[i][j]=1;
        }
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        
        if(m[0][0]==0){
            return ans;
        }
        string temp="";
        movement(ans,temp,m,n,0,0);
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends