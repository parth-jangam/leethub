class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int p=0;
        while(n>0){
            if(nums[i]!=p){
                break;
            }
            p++;
            i++;
            n--;
        }
        return p;
    }
};