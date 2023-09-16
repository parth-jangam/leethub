class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<pair<int, int>, int> mappe;
        int count_zero=0;
        int count_one=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_zero++;
            }
            else{
                count_one++;
            }
            pair<int,int>p={0,0};
            if(count_zero<count_one){
                int diff=count_one-count_zero;
                p={0,diff};
            }
            else{
                
                int diff=count_zero-count_one;
                p={diff,0};
            }
            if(p.first==0 && p.second==0){
                ans=i+1;
                continue;
            }
            // cout<<p.first<<" "<<p.second<<endl;
            if(mappe.find(p)!=mappe.end()){
                ans=max(ans,i-mappe[p]);
            }
            else{
                mappe[p]=i;
            }
        }
        
        
        return ans;
    }
};