class Solution {
public:
    void bfs(vector<int>adj[],int i,vector<int>&vis){
        queue<int>q;
        q.push(i);
        vis[i]=1;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            for(auto x:adj[a]){
                if(vis[x]==0){
                    q.push(x);
                    vis[x]=1;
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>adj[n];
        for(int i=0;i<rooms.size();i++){
            for(auto x:rooms[i]){
                adj[i].push_back(x);
                // adj[x].push_back(i);
            }
        }
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                bfs(adj,i,vis);
                count++;
            }
        }
        if(count>1){
            return false;
        }
        return true;
    }
};