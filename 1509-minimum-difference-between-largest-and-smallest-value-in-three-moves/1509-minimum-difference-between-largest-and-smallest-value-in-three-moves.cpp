class Solution {
public:
    int maxi(vector<int>&nums,int count,int i,int j){
        if(count==3){
            return nums[j]-nums[i];
        }
        return min(maxi(nums,count+1,i+1,j),maxi(nums,count+1,i,j-1));
        
    }
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=0;
        int i=0;
        int j=nums.size()-1;
        return maxi(nums,count,i,j);
    }
};