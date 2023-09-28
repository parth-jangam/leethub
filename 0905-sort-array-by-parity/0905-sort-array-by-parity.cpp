class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        
        int i=0;
        while(i<nums.size()){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
            i++;
        }
        for(int i=0;i<even.size();i++){
            nums[i]=even[i];
            
        }
        int j=even.size();
        for(int i=0;i<odd.size();i++){
            nums[j]=odd[i];
            j++;
        }
        return nums;
    }
};