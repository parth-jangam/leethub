class Solution {
public:
    void bfs(vector<int>adj[],vector<int>&vis,int i,int &count){
    
        queue<int>q;
        q.push(i);
        vis[i]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x:adj[node]){
                if(vis[x]!=1){
                    count++;
                    // cout<<x<<endl;
                    q.push(x);
                    vis[x]=1;
                }
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<int>adj[n];
        for(int i=0;i<bombs.size();i++){
            for(int j=0;j<bombs.size();j++){
                if(i==j)continue;
                // cout<<pow((bombs[i][0]-bombs[j][0]),2)<<" "<<pow((bombs[i][1]-bombs[j][1]),2)<<" "<<pow(bombs[i][2],2)<<endl;
                if((pow((bombs[i][0]-bombs[j][0]),2)+pow((bombs[i][1]-bombs[j][1]),2))<=pow(bombs[i][2],2)){
                    // cout<<"Hellp"<<endl;
                    adj[i].push_back(j);
                    // adj[j].push_back(i);
                    // cout<<i<<" "<<j<<endl;
                }
            }
        }
        // cout<<adj[1][0]<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<adj[i].size();j++){
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        
        int maxi=0;
        for(int i=0;i<n;i++){
            int count=1;
            vector<int>vis(n,0);
            if(vis[i]==0){
                bfs(adj,vis,i,count);
                maxi=max(count,maxi);
            }
            
        }
        return maxi;
    }
};