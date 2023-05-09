class Solution {
public:
    void traverse(vector<vector<int>>& matrix,vector<int>&ans){
        int m=matrix.size();
        int n=matrix[0].size();
        int row_index=0;
        int column_index=0;
        while(row_index<m && column_index<n){
            for(int i=column_index;i<n;i++){
                ans.push_back(matrix[row_index][i]);
                
            }
            row_index++;
            for(int i=row_index;i<m;i++){
                ans.push_back(matrix[i][n-1]);
            }
            n--;
            if(m>row_index){
                for(int i=n-1;i>=column_index;i--){
                    ans.push_back(matrix[m-1][i]);
                }
                m--;
            }
            if(n>column_index){
                for(int i=m-1;i>=row_index;i--){
                  ans.push_back(matrix[i][column_index]);  
                }
                column_index++;
            }
            
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        traverse(matrix,ans);
        return ans;
        
    }
};