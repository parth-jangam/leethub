class Solution {
public:
    void bfs(vector<vector<int>>&grid,vector<vector<int>>&vis,int &count,int p,int q,int m,int n){
        // int delrow[]={-1,1,0,0};
        // int delcol[]={0,0,1,-1};
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1}; 
        queue<pair<int,int>>qq;
        qq.push({p,q});
        vis[p][q]=1;
        while(!qq.empty()){
            auto x=qq.front();
            qq.pop();
            int r=x.first;
            int c=x.second;
            for(int i=0;i<4;i++){
                int nrow=r+delrow[i];
                int ncol=c+delcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    qq.push({nrow,ncol});
                    count++;
                    vis[nrow][ncol]=1;
                }
            }
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    int count=1;
                    bfs(grid,vis,count,i,j,m,n);
                    ans=max(ans,count);
                }
            }
        }
        return ans;
    }
};