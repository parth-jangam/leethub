class Solution {
public:
    bool check_column(vector<vector<int>>&mat,int i,int j){
        for(int k=0;k<mat.size();k++){
            if(mat[k][j]==1 && k!=i){
                return false;
            }
        }
        return true;
    }
    bool check_row(vector<vector<int>>&mat,int i,int j){
        for(int k=0;k<mat[0].size();k++){
            if(mat[i][k]==1 && k!=j){
                return false;
            }
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    // cout<<i<<" "<<j<<" ";
                    // cout<<column_true(mat,j);
                    // cout<<" "<<row_true(mat,i);
                    // cout<<endl;
                    // if( && )count++;
                    if(check_column(mat,i,j) && check_row(mat,i,j))count++;
                }
            }
        }
        return count;
    }
};