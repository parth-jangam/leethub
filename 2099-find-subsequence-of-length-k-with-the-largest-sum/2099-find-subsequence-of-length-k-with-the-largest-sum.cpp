class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;
        int i=0;
        while(i<nums.size()){
            q.push({nums[i],i});
            i++;
        }
        i=0;
        vector<int>temp;
        while(i<k){
            auto x=q.top();
            q.pop();
            temp.push_back(x.second);
            i++;
        }
        sort(temp.begin(),temp.end());
        i=0;
        while(i<temp.size()){
            temp[i]=nums[temp[i]];
            i++;
        }
        return temp;
        
    }
};