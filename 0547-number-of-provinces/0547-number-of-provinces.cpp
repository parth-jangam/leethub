class Solution {
public:
    void dfs(vector<int>adj[],int i, vector<int>&vis){
        vis[i]=1;
        for(auto x:adj[i]){
            if(vis[x]==0){
                // vis[x]=1;
                dfs(adj,x,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        // int vis[n]={0}
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                count++;
                dfs(adj,i,vis);
            }
        }
        return count;
    }
};