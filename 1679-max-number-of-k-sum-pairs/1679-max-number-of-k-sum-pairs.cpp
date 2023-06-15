class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        long long int i=0;
        sort(nums.begin(),nums.end());
        long long int j=nums.size()-1;
        long long int count=0;
        while(i<j){
            if(nums[i]+nums[j]==k){
                
                count++;
                j--;
                i++;
            }
            else{
                if(nums[i]+nums[j]>k){
                    j--;
                    
                }
                else{
                    i++;
                }
            }
        }
        return count;
    }
};