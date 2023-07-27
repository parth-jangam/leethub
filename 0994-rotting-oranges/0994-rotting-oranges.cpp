class Solution {
public:
//     int bfs(int i,){
//         queue<pair<int,int>>q;
//         int time=0;
//         while(!q.empty()){
//             auto x=q.front();
//             int i=x.first;
//             int j=x.second;
//             for(auto ){
//                 if(x==1){
                    
//                 }
//             }
//         }
        
//     }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int ans=0;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int time=q.front().second;
            ans=max(ans,time);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){    
                    q.push({{nrow,ncol},time+1});
                    vis[nrow][ncol]=1;
                }
            }
            
        }
        //check 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    return -1;
                }
            }
        }
        return ans;
    }
};