class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        queue<int>q;
        int i=0;
        int maxi=0;
        while(i<nums.size()){
            // maxi=max(maxi,q.size());
            // cout<<q.size()<<" "<<maxi<<endl;
            // if(maxi<q.size()){
            //     maxi=q.size();
            // }
            // int count=0;
            while(i<nums.size() && nums[i]==1){
                q.push(nums[i]);
                // count++;
                i++;
            }
            if(maxi<q.size()){
                maxi=q.size();
            }
            if(i<nums.size() && nums[i]==0){
                if(k==0){
                    while(!q.empty() && q.front()!=0){
                        q.pop();
                    }
                    q.pop();
                    q.push(nums[i]);
                }
                else{
                    q.push(nums[i]);
                    k--;
                }
                i++;
            }
            
            
        }
        if(maxi<q.size()){
                maxi=q.size();
        }
        return maxi;
    }
};