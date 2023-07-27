class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                q.push({i,0});
                vis[i][0]=1;
                
            }
            if(grid[i][m-1]==1){
                q.push({i,m-1});
                vis[i][m-1]=1;
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                q.push({0,i});
                vis[0][i]=1;
                
            }
            if(grid[n-1][i]==1){
                q.push({n-1,i});
                vis[n-1][i]=1;
            }
        }
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
            
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    count++;
                }
            }
        }
        return count;
        
    }
};