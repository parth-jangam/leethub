class Solution {
public:
    // int max_right(vector<int>& nums){
    //     int i=nums.size()-1;
    //     int prod=1;
    //     int max_prod=INT_MIN ;
    //     while(i>=0){
    //         prod*=nums[i];
    //         max_prod=max(prod,max_prod);
    //         if(prod==0){
    //             prod=1;
    //         }
    //         i--;
    //     }
    //     return max_prod;
    // }
    // int max_left(vector<int>& nums){
    //     int i=0;
    //     int prod=1;
    //     int max_prod=INT_MIN ;
    //     while(i<nums.size()){
    //         prod*=nums[i];
    //         max_prod=max(prod,max_prod);
    //          if(prod==0){
    //             prod=1;
    //         }
    //         i++;
    //     }
    //     return max_prod;
    // }
    #include<vector>
long long left_mul(vector<int> &arr){
	int prod=1;
	int ans=INT_MIN;
	int i=0;
	while(i<arr.size()){
        bool flag=0;
		if(arr[i]==0){
			prod=1;
		}
		else{
            flag=1;
			prod=prod*arr[i];
		}
        if(flag==1){
            ans=max(ans,prod);
        }
        else{
		    ans=max(ans,0);
        }
		// ans=max(ans,prod);
		i++;
	}
	return ans;
}
long long right_mul(vector<int> &arr){
	int prod=1;
	int ans=INT_MIN;
	int i=arr.size()-1;
    
	while(i>=0){
        bool flag=0;
		if(arr[i]==0){
			prod=1;
            
		}
		else{
			prod=prod*arr[i];
            flag=1;
		}
        if(flag==1){
            ans=max(ans,prod);
        }
        else{
		    ans=max(ans,0);
        }
		i--;
	}
	return ans;
}
// int subarrayWithMaxProduct(vector<int> &arr){
// 	// Write your code here.
// 	int ans=max(left_mul(arr),right_mul(arr));
// 	return ans;
// }
    int maxProduct(vector<int>& arr) {
        // return max(max_left(nums),max_right(nums));
        int ans=max(left_mul(arr),right_mul(arr));
	return ans;
    }
};