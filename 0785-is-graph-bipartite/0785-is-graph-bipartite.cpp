class Solution {
public:
    bool bfs(vector<vector<int>>&graph,int i,vector<int>&color){
        queue<int>q;
        q.push(i);
        color[i]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x:graph[node]){
                if(color[x]==0){
                    if(color[node]==1){
                        color[x]=2;
                    }
                    else{
                        color[x]=1;
                    }
                    q.push(x);
                    
                }
                else{
                    
                    if(color[node]==color[x]){
                        // cout<<node<<x<<endl;
                        // // cout<<"hello";
                        return false;
                    }
                }
                
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int m=graph[0].size();
        
        vector<int>color(n,0);
        for(int i=0;i<n;i++){
            if(color[i]==0){
                if(!bfs(graph,i,color)){
                    return false;
                }
            }    
        }
        
        return true;
    }
};