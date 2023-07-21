class Solution {
public:
    int digit(vector<vector<int>>&mat,int k,int i,int j,int m,int n){
        int sum=0;
        int p,q;
        int r,s;
        if(i-k>=0){
            p=i-k;
        }
        else{
            p=0;
        }
        if(i+k<m){
            r=i+k;
        }
        else{
            r=m-1;
        }


        if(j-k>=0){
            q=j-k;
        }
        else{
            q=0;
        }
        if(j+k<n){
            s=j+k;
        }
        else{
            s=n-1;
        }
        
        int a=q;
        while(p<=r){
            q=a;
            while(q<=s){
                sum+=mat[p][q];
                q++;
            }
            p++;
        }
        return sum;
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x= digit(mat,k,i,j,m,n);
                ans[i][j]=x;
            }
        }
        return ans;
    }
};