class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // unordered_map<int,int>mappe;
        
        int sum=0;
        int i=0;
        int j=0;
        int m=mat.size();
        // bool m=0;
        
        while(i<m && j<m){
            sum+=mat[i][j];
            i++;
            j++;
        }
        i=0;
        j=m-1;
        while(i<m && j>=0){
            sum+=mat[i][j];
            i++;
            j--;
        }
        cout<<sum<<endl;
        if(m%2!=0){
            int c=m/2;
            sum-=mat[c][c];
        }
        return sum;
    }
};