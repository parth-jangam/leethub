class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int ind1=-1;
        int i=nums.size()-2;
        while(i>=0){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
            i--;
        }
        int ind2=-1;
        // cout<<ind1<<endl;
        int j=nums.size()-1;
        // cout<<j<<endl;
        while(ind1!=-1 && j>=0){
            
            if(nums[j]>nums[ind1]){
                ind2=j;
                break;
            }
            j--;
        }
        // cout<<ind2;
        if(ind1!=-1 && ind2!=-1){
            swap(nums[ind1],nums[ind2]);
        }
        reverse(nums.begin()+ind1+1,nums.end());
    }
};