class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,-1);
        if(2*k+1>n){
            return ans;
        }
        int start=0;
        int end=0;
        long long int sum=0;
        while(end<2*k+1){
            sum+=nums[end];
            end++;
        }
        int mid=(start+(end-1))/2;
        ans[mid]=sum/(2*k+1);
        while(end<n){
            sum-=nums[start];
            sum+=nums[end];
            mid++;
            ans[mid]=sum/(2*k+1);
            start++;
            end++;
        }
        return ans;
    }
};