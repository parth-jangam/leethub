class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0){
            return -1;
        }
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        
        vector<vector<int>>vis(m,vector<int>(n,0));
        vis[0][0]=1;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            
            int dist=q.front().second;
            q.pop();
            if(row==m-1 && col==n-1){
                return dist;
            }
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nrow=row+i;
                    int ncol=col+j;
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==0 && vis[nrow][ncol]==0){
                        q.push({{nrow,ncol},dist+1});
                        vis[nrow][ncol]=1;
                    }
                }
            }
        }
        return -1;
    }
};