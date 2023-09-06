class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<pair<int,int>,int>>q;
        int m=maze.size();
        int n=maze[0].size();
        q.push({{entrance[0],entrance[1]},0});
        // unordered_map<pair<int,int>,int>mappe;
        // int vis[m][n]={0};
        vector<vector<int>>vis(m,vector<int>(n,0));
        vis[entrance[0]][entrance[1]]=1;
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            int time=x.second;
            int row=x.first.first;
            int col=x.first.second;
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                // cout<<nrow<<ncol<<endl;
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && maze[nrow][ncol]=='.' && vis[nrow][ncol]==0){
                    
                    if(nrow==0 || ncol==0 || nrow==m-1 || ncol==n-1){
                        return time+1;
                    }
                    else{
                        q.push({{nrow,ncol},time+1});
                    }
                    vis[nrow][ncol]=1;
                    
                }
            }
        }
        return -1;
    }
};