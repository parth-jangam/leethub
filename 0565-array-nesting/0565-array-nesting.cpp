class Solution {
public:
    void dfs(vector<int>adj[],vector<int>&vis,int i,int &count){
        vis[i]=1;
        for(auto x:adj[i]){
            if(vis[x]!=1){
                count++;
                dfs(adj,vis,x,count);
            }
        }
    }
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        vector<int>adj[n];
        
        for(int i=0;i<n;i++){
            adj[nums[i]].push_back(nums[nums[i]]);
        }
        
        int maxi=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            
            int count=0;
            if(vis[i]==0){
                // cout<<"hello"<<endl;
                dfs(adj,vis,i,count);
            }
            maxi=max(maxi,count);
        }
        return maxi+1;
        
    }
};