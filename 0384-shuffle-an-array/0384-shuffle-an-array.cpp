class Solution {
public:
    vector<int>dummy;
    vector<int>target;
    Solution(vector<int>& nums) {
        target=nums;
        dummy=nums;
    }
    
    vector<int> reset() {
        // target=dummy;
        return dummy;
    }
    
    vector<int> shuffle() {
        next_permutation(target.begin(),target.end());
        return target;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */