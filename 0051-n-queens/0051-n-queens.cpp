class Solution {
public:
    bool is_valid(int row,int col,vector<string>&grid,int n){
        for(int i=0;i<col;i++){
            if(grid[row][i]=='Q')return false;
        }
        
        for(int i=row,j=col;i<n && j>=0;i++,j--){
            if(grid[i][j]=='Q')return false;
        }
         for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(grid[i][j]=='Q')return false;
        }
        return true;
    }
    void permul(vector<string>&grid,vector<vector<string>>&ans,int n,int col){
        if(n==col){
            ans.push_back(grid);
            return ;
        }
        for(int row=0;row<n;row++){
            if(is_valid(row,col,grid,n)){
                grid[row][col]='Q';
                permul(grid,ans,n,col+1);
                grid[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>grid(n,string(n,'.'));
        vector<vector<string>>ans;
        
        int col=0;
        permul(grid,ans,n,col);
        return ans;
    }
};