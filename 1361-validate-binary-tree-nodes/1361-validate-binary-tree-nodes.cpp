class Solution {
public:
    bool dfs(vector<int>adj[],vector<int>&vis,int i){
        vis[i]=1;
        for(auto x:adj[i]){
            if(vis[x]==0){
                if(!dfs(adj,vis,x))return false;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
           
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            if(leftChild[i]!=-1){
                adj[i].push_back(leftChild[i]);
                indegree[leftChild[i]]++;
            }
            if(rightChild[i]!=-1){
                adj[i].push_back(rightChild[i]);
                 indegree[rightChild[i]]++;
            }
            
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({indegree[i],i});
        }
        sort(v.begin(),v.end());
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[v[i].second]==0){
            // vector<int>vis(n,0);
                if(!dfs(adj,vis,v[i].second)){
                    return false;
                }
                count++;
            }
            // bool flag=0;
            
        }
        if(count>1){
            return false;
        }
        return true;
        
    }
};