class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        int prod=0;
        int i=0;
        while(i<nums.size()){
            sum+=nums[i];
            prod+=(nums[i]*i);
            i++;
        }
        int maxi=prod;
        int n=nums.size();
        i=n-1;
        while(i>0){
            int ans= prod-(nums[i]*(n-1))+(sum-nums[i]);
            maxi=max(maxi,ans);
            prod=ans;
            i--;
        }
        return maxi;
    }
};