class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long mini=INT_MAX;
        long long sum=0;
        int count_neg=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]<0){
                    count_neg++;
                }
                if(mini>abs(matrix[i][j])){
                    mini=abs(matrix[i][j]);
                }
                // mini=min(mini,abs(matrix[i][j]));
                sum+=abs(matrix[i][j]);
            }
        }
        if(count_neg%2==0){
            return sum;
        }
        sum-=(2*mini);
        return sum;
        
    }
};