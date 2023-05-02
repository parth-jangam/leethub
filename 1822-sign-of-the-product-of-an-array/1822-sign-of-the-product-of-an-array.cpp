class Solution {
public:
    int arraySign(vector<int>& nums) {
        int i=0;
        int prod=1;
        int curr=1;
        while(i<nums.size()){
            if(nums[i]<0 && curr==1){
                curr=-1;
            }
            else{
                if(nums[i]<0 && curr==-1){
                    curr=1;
                }
                else{
                    if(nums[i]==0){
                        curr=0;
                    }
                    
                }
            }
            i++;
        }
        return curr;
    }
};