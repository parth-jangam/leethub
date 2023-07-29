class Solution {
public:
    bool is_cycle(vector<int>adj[],int i,vector<int>&vis,vector<int>&pathvis){
        vis[i]=1;
        pathvis[i]=1;
        for(auto x:adj[i]){
            if(!vis[x]){
                if(is_cycle(adj,x,vis,pathvis)==true){
                    return true;
                }
            }
            else{
                if(pathvis[x]){
                    return true;
                }
            }
        }
        pathvis[i]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>adj[numCourses];
        for(int i=0;i<prerequisites.size();i++){
        
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int>vis(numCourses,0);
        // int vis[numCourses]={0};
        vector<int>pathvis(numCourses,0);
        // int pathvis[numCourses]={0};
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(is_cycle(adj,i,vis,pathvis)){
                    return false;
                }
            }
        }
        return true;
    }
};