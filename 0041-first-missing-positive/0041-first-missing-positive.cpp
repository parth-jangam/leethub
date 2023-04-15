class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool>check;
        int i=0;
        while(i<nums.size()){
            check[nums[i]]=true;
            i++;
        }
        i=1;
        while(i<=nums.size()){
            if(check[i]==false){
                return i;
            }
            i++;
        }
        return i;
    }
};