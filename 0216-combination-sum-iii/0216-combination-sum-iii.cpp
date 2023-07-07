class Solution {
public:
    void sub(vector<int>&inp,vector<vector<int>>&ans,int ind,int k,int n,vector<int>&temp){
        if(temp.size()==k){
            if(n==0){
                ans.push_back(temp);
            }
            return;
        }
        for(int i=ind;i<inp.size();i++){
            
            // if(i!=ind && inp[i]==inp[i+1])continue;
            temp.push_back(inp[i]);
            n=n-inp[i];
            sub(inp,ans,i+1,k,n,temp);
            n=n+inp[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>inp;
        int i=0;
        while(i<9){
            inp.push_back(i+1);
            i++;
        }
        vector<int>temp;
        sub(inp,ans,0,k,n,temp);
        return ans;
        
    }
};