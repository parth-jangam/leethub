class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mappe;
        int i=0;
        while(i<nums.size()){
            mappe[nums[i]]++;
            i++;
        }
        int sum=0;
        for(auto x:mappe){
            if(x.second==1){
                sum+=x.first;
            }
        }
        return sum;
    }
};