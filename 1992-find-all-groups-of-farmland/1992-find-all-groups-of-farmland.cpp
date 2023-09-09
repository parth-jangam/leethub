class Solution {
public:
    void bfs(vector<vector<int>>& land,vector<vector<int>>&vis,vector<vector<int>>&ans,int i,int j,int m,int n){
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=1;
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        vector<int>temp(4,0);
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            int row=x.first;
            int col=x.second;
            if((row==0 || land[row-1][col]==0) && (col==0 || land[row][col-1]==0)){
                temp[0]=row;
                temp[1]=col;
            }
            if((row==m-1 || land[row+1][col]==0) && (col==n-1 || land[row][col+1]==0)){
                temp[2]=row;
                temp[3]=col;
            }
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && land[nrow][ncol]==1 && vis[nrow][ncol]==0){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
                
            }
        }
        ans.push_back(temp);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m=land.size();
        int n=land[0].size();
        vector<vector<int>>ans;
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j]==1 && vis[i][j]==0){
                    bfs(land,vis,ans,i,j,m,n);
                }
            }
        }
       return ans;
    }   
};