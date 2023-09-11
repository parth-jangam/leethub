class Solution {
public:
    void printSubsequences(vector<int>&arr, int index,vector<int> &subarr,int n,vector<vector<int>>&ans)
    {
        if (index == n)
        {
            if(subarr.size()==0){
                ans.push_back({});
            
            }
            else{
                ans.push_back(subarr);
            }
         
            return;
 
         }
        else
        {
            //pick the current index into the subsequence.
            subarr.push_back(arr[index]);
            printSubsequences(arr, index + 1, subarr,n,ans);
            subarr.pop_back();
            printSubsequences(arr, index + 1, subarr,n,ans);
    }
    
}
    int countMaxOrSubsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        printSubsequences(nums,0,temp,n,ans);
        unordered_map<int,int>mappe;
        for(int i=0;i<ans.size();i++){
            if(ans[i].size()==0)continue;
            int temp=ans[i][0];
            for(int j=1;j<ans[i].size();j++){
                temp=temp | ans[i][j];
                
            }
            mappe[temp]++;
        }
        int anss;
        int comp=INT_MIN;
        for(auto x:mappe){
            auto a=x;
            int num=a.first;
            int count=a.second;
            if(comp<num){
                anss=count;
                comp=num;
            }
        }
        return anss;
    }
};