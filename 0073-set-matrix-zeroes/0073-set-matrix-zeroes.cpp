class Solution {
public:
    void make_column_zero(vector<vector<int>>& matrix,int column,int n){
        int i=0;
        while(i<n){
            matrix[i][column]=0;
            i++;
        }
    }
    void make_row_zero(vector<vector<int>>& matrix,int row,int m){
        int i=0;
        while(i<m){
            matrix[row][i]=0;
            i++;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        // unordered_map<int,int>mappe;
        vector<pair<int,int>>mappe;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    mappe.push_back({i,j});
                }
            }
        }
        for(auto x:mappe){
            int row=x.first;
            int column=x.second;
            make_row_zero(matrix,row,m);
            make_column_zero(matrix,column,n);
        }
        
    }
};