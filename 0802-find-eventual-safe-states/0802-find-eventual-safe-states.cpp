class Solution {
public:
    bool iscyclicdfs(int i,unordered_map<int,bool>&vis,unordered_map<int,bool>&dfsvis,  vector<int>adj[],vector<int>&node){
       vis[i]=true;
       dfsvis[i]=true;
       
       for( auto neighbour:adj[i]){
           if(!vis[neighbour]){
                bool checkcycle=iscyclicdfs(neighbour,vis,dfsvis,adj,node);
               if(checkcycle)
               return true;
           }
           
           else if(dfsvis[neighbour]){
              return true;
           }
    
       }
        node[i]=1;
       dfsvis[i]=false;
       return false;
   }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        
        vector<int>adj[graph.size()];
        for(int i=0;i<graph.size();i++){
            // bool flag=0;
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]);
            }
            
        }
        vector<int>ans;
        unordered_map<int,bool>vis;
        unordered_map<int,bool>dfsvis;
        vector<int>node(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
           // if(!vis[i]){
               bool checkcycle=iscyclicdfs(i,vis,dfsvis,adj,node);
               if(!checkcycle || node[i]==1){ans.push_back(i);}
               // return true;
           // }
       }
  // return false;
        return ans;
    }
};