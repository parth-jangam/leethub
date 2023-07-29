class Solution {
public:
    
//     bool dfs(vector<int>adj[],int i,vector<int>&ans,vector<int>&vis,vector<int>&pathvis){
//         vis[i]=1;
//         pathvis[i]=1;
//         for(auto x:adj[i]){
//             if(vis[x]==0){
//                 if(dfs(adj,x,ans,vis,pathvis)==true){
                   
//                     return true;
//                 }
//             }
//             else if(pathvis[x]==1){
//                  // cout<<"hello";
//                 return true;
//             }
//         }
//         pathvis[i]=0;
//         ans.push_back(i);
//         return false;
//     }
     bool is_cycle(vector<int>adj[],int i,vector<int>&vis,vector<int>&pathvis,vector<int>&topo){
        vis[i]=1;
        pathvis[i]=1;
        for(auto x:adj[i]){
            if(!vis[x]){
                if(is_cycle(adj,x,vis,pathvis,topo)==true){
                    return true;
                }
            }
            else{
                if(pathvis[x]){
                    return true;
                }
            }
        }
        topo.push_back(i);
        pathvis[i]=0;
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        
        for(int i=0;i<prerequisites.size();i++){
            
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        }
        
        
        vector<int>vis(numCourses,0);
        // int vis[numCourses]={0};
        vector<int>pathvis(numCourses,0);
        // int pathvis[numCourses]={0};
        vector<int>topo;
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(is_cycle(adj,i,vis,pathvis,topo)){
                    return {};
                }
            }
        }
        // cout<<topo.size()<<endl;
        return topo;
    }
};