class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        vector<int>dist(n+1,1e9);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,k});
        while(!q.empty()){
            
            int dis=q.top().first;
            int node=q.top().second;
            q.pop();
            for(auto x:adj[node]){
                int adjnode=x.first;
                int edge=x.second;
                if(dis+edge<dist[adjnode]){
                    dist[adjnode]=dis+edge;
                    q.push({dist[adjnode],adjnode});
                }
            }
        }
        // cout<<"hello";
        int ans=0;
        for(int i=1;i<dist.size();i++){
            if(dist[i]==1e9){
                return -1;
            }
            ans=max(ans,dist[i]);
        }
        return ans;
        
    }
};