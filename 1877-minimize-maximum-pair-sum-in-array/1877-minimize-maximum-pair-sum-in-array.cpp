class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int maxi=0;
        while(i<j){
            // if(maxi<)
            maxi=max(maxi,nums[i]+nums[j]);
            i++;
            j--;
        }
        return maxi;
    }
};