class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(auto x:graph[i]){
                adj[x].push_back(i);
            }
        }
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto x:adj[i]){
                indegree[x]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            topo.push_back(node);
            q.pop();
            for(auto x:adj[node]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        sort(topo.begin(),topo.end());
        return topo;
    }
};