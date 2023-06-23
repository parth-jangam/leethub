class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        queue<int>q;
        unordered_map<int,bool>mappe;
        int sum=0;
        int max_sum=0;
        int i=0;
        while(i<nums.size()){
            if(!mappe[nums[i]]){
                sum+=nums[i];
                q.push(nums[i]);
                mappe[nums[i]]=true;
                i++;
            }
            else{
                while(!q.empty() && q.front()!=nums[i]){
                    // int sub=q.front();
                    sum-=q.front();
                    mappe[q.front()]=false;
                    q.pop();
                }
                sum-=q.front();
                mappe[q.front()]=false;
                q.pop();
                
            }
            
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};