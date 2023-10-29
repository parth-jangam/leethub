class Solution {
public:
    int maxumum(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&vis){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0){
            // cout<<"hey"<<endl;
            return 0;
        }
        int l=0,r=0,t=0,b=0;
        if(vis[i][j]==0){
            vis[i][j]=1;
            l+=(grid[i][j]+maxumum(grid,i,j-1,vis));
            vis[i][j]=0;
        }
        if(vis[i][j]==0){
            vis[i][j]=1;
            r+=(grid[i][j]+maxumum(grid,i,j+1,vis));
            vis[i][j]=0;
        }
        if(vis[i][j]==0){
            vis[i][j]=1;
            t+=(grid[i][j]+maxumum(grid,i-1,j,vis));
            vis[i][j]=0;
        }
        if(vis[i][j]==0){
            vis[i][j]=1;
            b+=(grid[i][j]+maxumum(grid,i+1,j,vis));
            vis[i][j]=0;
        }
        return max(l,max(r,max(b,t)));
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0){
                    // cout<<"hello"<<endl;
                    vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
                    maxi=max(maxi,maxumum(grid,i,j,vis));
                }
            }
        }
        return maxi;
    }
};