class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0){
            return {};
        }
        int i=0;
        int start=nums[0];
        int end=nums[0];
        string temp="";
        vector<string>ans;
        while(i<nums.size()-1){
            if(nums[i]+1==nums[i+1]){
                
                end=nums[i+1];
                i++;
            }
            else{
                if(start==end){
                    temp=to_string(start);
                    ans.push_back(temp);
                    temp="";
                    start=nums[i+1];
                    end=nums[i+1];
                    i++;
                }
                else{
                    temp+=to_string(start);
                    temp+="->";
                    temp+=to_string(end);
                    ans.push_back(temp);
                    temp="";
                    start=nums[i+1];
                    end=nums[i+1];
                    i++;
                }
            }
        }
        temp="";
        if(start==end){
            temp+=to_string(start);
            ans.push_back(temp);
        }
        else{
             temp+=to_string(start);
             temp+="->";
             temp+=to_string(end);
            ans.push_back(temp);
        }
        return ans;
    }
};