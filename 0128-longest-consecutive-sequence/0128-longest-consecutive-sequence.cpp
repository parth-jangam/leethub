class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_map<int ,bool>mappe
        if(nums.size()==0){
            return 0;
        }
        priority_queue<int>q;
        int i=0;
        while(i<nums.size()){
            q.push(nums[i]);
            i++;
        }
        int maxi=1;
        int max_ans=1;
        int initial=q.top();
        q.pop();
        while(!q.empty()){
            if(initial-1==q.top()){
                maxi++;
                
            }
            else{
                if(initial-q.top()>1){
                    maxi=1;    
                }
                
                
                
            }
            initial=q.top();
            q.pop();
            max_ans=max(maxi,max_ans);
        }
        return max_ans;
    }
};