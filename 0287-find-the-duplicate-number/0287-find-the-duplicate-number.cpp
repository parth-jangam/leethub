class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool>mappe;
        int i=0;
        while(i<nums.size()){
            if(mappe[nums[i]]==true){
                return nums[i];
            }
            mappe[nums[i]]=true;
            i++;
        }
        return 0;
    }
};