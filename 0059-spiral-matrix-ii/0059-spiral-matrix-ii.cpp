class Solution {
public:
    void traverse(int r,int c,vector<vector<int>>&matrix){
        int row_index=0;
        int column_index=0;
        int x=1;
        while(row_index<r && column_index<c){
            for(int i=column_index;i<c;i++){
                matrix[row_index][i]=x;
                x++;
            }
            row_index++;
            for(int i=row_index;i<r;i++){
                matrix[i][c-1]=x;
                x++;
            }
            c--;
            if(row_index<r){
                for(int i=c-1;i>=column_index;i--){
                    matrix[r-1][i]=x;
                    x++;
                }
                r--;
            }
            if(column_index<c){
                for(int i=r-1;i>=row_index;i--){
                    matrix[i][column_index]=x;
                    x++;
                }
                column_index++;
            }
            
        }
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,-1));
        traverse(n,n,matrix);
        return matrix;
    }
};