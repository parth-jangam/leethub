class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(numsDivide.begin(),numsDivide.end());
        sort(nums.begin(),nums.end());
        int count=0;
        int i=0;
        while(i<nums.size()){
            int j=0;
            bool flag=0;
           
            while(j<numsDivide.size()){
            
                if(numsDivide[j]%nums[i]!=0){
                    flag=1;
                    break;
                }
                else{
                    while(j<numsDivide.size()-1 && numsDivide[j]==numsDivide[j+1]){
                        // j=j+2;
                        j++;
                    }
                    if(j==numsDivide.size()-1){
                        return count;
                    }
                    j++;
                    
                }
                
            }
            // cout<<flag<<endl;;
            if(flag==1){
                count++;
                while(i<nums.size()-1 && nums[i]==nums[i+1]){
                    i++;
                    count++;
                }
                i++;
                
            }
            else{
                return count;
            }
            
        }
        if(count==nums.size()){
            return -1;
        }
        return count;
    }
};