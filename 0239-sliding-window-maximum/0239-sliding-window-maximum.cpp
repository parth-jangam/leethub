class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<long long int>q;
        int maxi;
        vector< int>ans;
        // for(int i=0;i<k;i++){
        //     while(!q.empty() && nums[q.front()]<nums[i]){
        //         q.pop_front();
        //     }
        //     q.push_back(i);
        // }
        // ans.push_back(nums[q.front()]);
        // int j=0;
        for(long long int i=0;i<nums.size();i++){
            while((!q.empty() && i-k==q.front())){
                q.pop_front();
            }
            while((!q.empty() && nums[q.back()]<=nums[i])){
                q.pop_back();
            }
            q.push_back(i);
             if(i >= k-1){
               ans.push_back(nums[q.front()]);
           }
            // j++;
            
        }
        return ans;
        
    }
};