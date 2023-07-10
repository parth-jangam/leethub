class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        if(nums.size()==1){
            return 0;
        }
        int i=0;
        if(nums[i]>nums[i+1]){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        i++;
        while(i<nums.size()-1){
            if(nums[i]<nums[i-1] || nums[i]>nums[i+1]){
                 mini=min(mini,nums[i]);
                maxi=max(maxi,nums[i]);
            }
            i++;
        }
        if(nums[i]<nums[i-1]){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        if(mini==INT_MAX && maxi==INT_MIN){
            return 0;
        }
        int f,l;
        i=0;
        bool flag1=0;
        while(i<nums.size()){
            if(nums[i]>mini && flag1==0){
                f=i;
                flag1=1;
            }
            if(nums[i]<maxi){
                l=i;
            }
            i++;
        }
        return (l-f)+1;
    }
};