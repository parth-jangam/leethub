class Solution {
public:
        bool iscyclicdfs(int i,unordered_map<int,bool>&vis,unordered_map<int,bool>&dfsvis,  vector<int>adj[]){
       vis[i]=true;
       dfsvis[i]=true;
       
       for( auto neighbour:adj[i]){
           if(!vis[neighbour]){
                bool checkcycle=iscyclicdfs(neighbour,vis,dfsvis,adj);
               if(checkcycle)
               return true;
           }
           
           else if(dfsvis[neighbour]){
              return true;
           }
    
       }
       dfsvis[i]=false;
       return false;
   }
   bool isCyclic(int V, vector<int> adj[]) {
        unordered_map<int,bool>vis;
        unordered_map<int,bool>dfsvis;
        for(int i=0;i<V;i++){
           if(!vis[i]){
               bool checkcycle=iscyclicdfs(i,vis,dfsvis,adj);
               if(checkcycle)
               return true;
           }
        }
        return false; 
   }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,int>mp;
        int i=0;
        vector<int>adj[numCourses];
        while(i<prerequisites.size()){
            // mp[prerequisites[i][0]]=prerequisites[i][1];
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            i++;
        }
        if(isCyclic(numCourses,adj)){
            return false;
        }
        return true;
        
        
    }
};