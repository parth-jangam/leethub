class Solution {
public:
    int dfs(vector<vector<int>>&grid,vector<vector<int>>&vis,int i,int j){
        if(i>=grid.size() || i<0 || j<0 || j>=grid[0].size()){
            return INT_MIN;
        }
        if(grid[i][j]==1){
            return 0;
        }
        int l=0,r=0,u=0,d=0;
        if(vis[i][j]==0){
            vis[i][j]=1;
            l=dfs(grid,vis,i,j-1);
            vis[i][j]=1;
            r=dfs(grid,vis,i,j+1);
            vis[i][j]=1;
            d=dfs(grid,vis,i+1,j);
            vis[i][j]=1;
            u=dfs(grid,vis,i-1,j);
        }
        return min(l,min(r,min(u,d)));
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0 && vis[i][j]==0){
                    int ans=dfs(grid,vis,i,j);
                    vis[i][j]=1;
                    if(ans==0){
                        // cout<<i<<" "<<j<<endl;
                        count++;
                    }
                }
            }
        }
        return count;
    }
};