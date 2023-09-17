class Solution {
public:
    vector<int>temp;
    Solution(vector<int>& nums) {
        temp=nums;
    }
    
    int pick(int target) {
        int i=0;
        vector<int>ans;
        while(i<temp.size()){
            if(temp[i]==target){
                ans.push_back(i);
            }
            i++;
        }
        int n=ans.size();
        return ans[rand()%n];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */