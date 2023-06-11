class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=1;
        while(i<matrix.size()){
            if(matrix[i][0]>target){
                i=i-1;
                break;
            }
            else{
                i++;
            }
        }
        if(i==matrix.size()){
            i=i-1;
        }
        int j=0;
        while(j<matrix[0].size()){
            if(target==matrix[i][j]){
                return true;
            }
            j++;
        }
        return false;
    }
};