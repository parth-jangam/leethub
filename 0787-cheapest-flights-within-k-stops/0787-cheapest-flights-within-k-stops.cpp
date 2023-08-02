class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int,int>>adj[n];
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        // cout<<"hello";
        vector<int>dist(n,1e9);
        dist[src]=0;        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        q.push({0,{0,src}});
        while(!q.empty()){
            int stage=q.top().first;
            int dis=q.top().second.first;
            int node=q.top().second.second;
            q.pop();
            if(stage>k)continue;
            for(auto x:adj[node]){
                int adjnode=x.first;
                int edgew=x.second;
                if(dis+edgew<dist[adjnode]){
                    dist[adjnode]=dis+edgew;
                    q.push({stage+1,{dist[adjnode],adjnode}});
                }
            }
        }
        if(dist[dst]==1e9)return -1;
        return dist[dst];
    }
};