class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        int row=matrix.size();
        int column=matrix[0].size();
        int l=0;
        for(int i=column-1;i>=0;i--){
            int k=0;
            for(int j=0;j<row;j++){
                matrix[j][i]=temp[l][k];
                k++;
            }
            l++;
        }
    }
};