//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long right_side(vector<int>arr,int n){
	    int i=n-1;
	    long long ansl=1;
	    long long max_prod=INT_MIN;
	    while(i>=0){
	        ansl*=arr[i];
	        max_prod=max(max_prod,ansl);
	        if(arr[i]==0){
	            ansl=1;    
	        }
	        i--;
	    }
	   // max_prod=max(max_prod,ansl);
	    return max_prod;
	}
	long long left_side(vector<int>arr,int n){
	    int i=0;
	    long long ansl=1;
	    long long max_prod=INT_MIN;
	    while(i<n){
	        ansl*=arr[i];
	        max_prod=max(max_prod,ansl);
	        if(arr[i]==0){
	            ansl=1;       
	        }
	        i++;
	    }
	   // max_prod=max(max_prod,ansl);
	    return max_prod;
	}
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    return max(right_side(arr,n),left_side(arr,n));
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends