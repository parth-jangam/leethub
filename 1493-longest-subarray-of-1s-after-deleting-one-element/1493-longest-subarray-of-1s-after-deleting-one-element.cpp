class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int>zeros;
        zeros.push_back(0);
        
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
                zeros.push_back(i+1);
            }
            i++;
        }
        zeros.push_back(nums.size()+1);
        if(zeros.size()<4){
            return nums.size()-1;
        }
        i=2;
        int maxx=INT_MIN;
        while(i<zeros.size()){
            maxx=max(maxx,zeros[i]-zeros[i-2]);
            i++;
        }
        // maxx-=1;
        return maxx-2;
        
    }
};