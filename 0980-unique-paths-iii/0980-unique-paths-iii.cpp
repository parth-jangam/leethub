class Solution {
public:
    int count(vector<vector<int>>& grid,int i,int j,int ex,int ey,int target,vector<vector<int>>vis,int countt){
        vis[i][j]=1;
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return 0;
        }
        if(grid[i][j]==-1){
            return 0;
        }
        
        if(i==ex && j==ey && countt==target+1){
            
            return 1;
        }

        int take=0;
        if(i+1>=0 && j>=0 && i+1<grid.size() && j<grid[0].size() && vis[i+1][j]==0 && grid[i+1][j]!=-1){
            take+=count(grid,i+1,j,ex,ey,target,vis,countt+1);    
        }
        if(i-1>=0 && j>=0 && i-1<grid.size() && j<grid[0].size() && vis[i-1][j]==0 && grid[i-1][j]!=-1)         {
            
            take+=count(grid,i-1,j,ex,ey,target,vis,countt+1);    
        }
        if(i>=0 && j+1>=0 && i<grid.size() && j+1<grid[0].size() && vis[i][j+1]==0 && grid[i][j+1]!=-1)         {
            take+=count(grid,i,j+1,ex,ey,target,vis,countt+1);    
        }
        if(i>=0 && j-1>=0 && i<grid.size() && j-1<grid[0].size() && vis[i][j-1]==0 && grid[i][j-1]!=-1)         {
           take+=count(grid,i,j-1,ex,ey,target,vis,countt+1);    
        }
        return take;
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int sx,sy,ex,ey;
        int counttt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    counttt++;
                }
                if(grid[i][j]==1){
                    sx=i;
                    sy=j;
                }
                if(grid[i][j]==2){
                    
                    ex=i;
                    ey=j;
                }
            }
        }
        vector<vector<int>>vis(grid.size()+1,vector<int>(grid[0].size()+1,0));
        
        int countt=0;
       // cout<<counttt<<endl;
        return count(grid,sx,sy,ex,ey,counttt,vis,countt);
        
    }
};