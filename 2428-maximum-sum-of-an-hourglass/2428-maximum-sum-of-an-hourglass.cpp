class Solution {
public:
    int count(vector<vector<int>>&grid,int i,int j){
        int r=i-1;
        int c=j-1;
        int ans=grid[i][j];
        for(int x=c;x<c+3;x++){
            ans+=grid[r][x];
            // cout<<grid[r][c]<<" ";
            
        }
        r=i+1;
        c=j-1;
        for(int x=c;x<c+3;x++){
            ans+=grid[r][x];
            // cout<<grid[r][c]<<" ";
            
        }
        // cout<<endl;
        return ans;
        
    }
    int maxSum(vector<vector<int>>& grid) {
        int max_sum=0;
        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[i].size()-1;j++){
                max_sum=max(max_sum,count(grid,i,j));
            }
        }
            
        return max_sum;
        
    }
};