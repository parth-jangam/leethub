class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }
        }
        return nums.size();
//         unordered_map<int,bool>mappe;
//         int i=0;
        
//         while(i<nums.size()){
//             mappe[nums[i]]=true;
//             i++;
//         }
//         return mappe.size();
    }
};