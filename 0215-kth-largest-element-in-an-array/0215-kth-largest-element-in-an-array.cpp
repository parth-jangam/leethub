class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        int i=0;
        while(i<nums.size()){
            q.push(nums[i]);
            i++;
        }
        i=0;
        while(i<k-1){
            q.pop();
            i++;
        }
        return q.top();
    }
};