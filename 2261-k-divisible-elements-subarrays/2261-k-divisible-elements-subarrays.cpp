class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
       
        set<vector<int>>ans;
        
        for(int i=0;i<nums.size();i++){
            int x=0;
            vector<int>temp;
           for(int j=i;j<nums.size();j++){ 
               temp.push_back(nums[j]);
                if(nums[j]%p==0){
                    
                
                        
                     x++;
                      
                    
                }
               if(x>k){
                   break;
               }
                ans.insert(temp);
           }
        }
        return ans.size();
    }
};