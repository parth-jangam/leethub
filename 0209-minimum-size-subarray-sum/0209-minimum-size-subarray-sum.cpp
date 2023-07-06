// #include<bits/stdc++.h>
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=1e9;
        queue<int>q;
        int i=0;
        int sum=0;
        while(i<nums.size()){
            while(i<nums.size() && sum<target){
                sum+=nums[i];
                q.push(nums[i]);
                i++;
            }
            if(sum<target){
                if(mini==1e9){
                        return 0;
                }
                return mini;
            }
            if(q.size()<mini){
                mini=q.size();
            }
            while(sum>=target){
                sum-=q.front();
                q.pop();
            }
            if(q.size()+1<mini){
                mini=q.size()+1;
            }
        }
        if(q.size()+1<mini){
            mini=q.size()+1;
        }
        // mini=min(mini,q.size()+1);
        return mini;
    }
};