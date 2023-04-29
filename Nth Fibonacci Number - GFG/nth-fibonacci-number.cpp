//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod=1000000007;
    long long int nthFibonacci(long long int n){
        // code here
        long long int first=1;
        long long int second=1;
        if(n==1 || n==2){
            return 1;
        }
        int i=2;
        while(i<n){
            long long int temp=second;
            second=(second+first)%1000000007;
            first=temp;
            i++;
        }
        return second;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends