class Solution {
public:
    bool is_true(vector<int>ans){
        int dif;
        sort(ans.begin(),ans.end());
        if(ans.size()>=2){
            dif=ans[1]-ans[0];
        }
        else{
            return true;
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1]!=dif){
                return false;
            }
        }
        return true;
        
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>bi(l.size(),false);
        for(int i=0;i<l.size();i++){
            int a=l[i];
            int b=r[i];
            vector<int>ans;
            while(a<=b){
                ans.push_back(nums[a]);
                a++;
            }
            
            
            bi[i]=(is_true(ans));
            // cout<<flag<<endl;
            // if(flag==true){
            //     b.push_back(1);
            // }
            // else{
            //     b.push_back(0);
            // }
            
            // b.push_back(flag);
        }
        return bi;
    }
};