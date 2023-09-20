class Solution {
public:
    vector<int>trav(int i,int j,int m,int n,vector<vector<int>>& mat){
        vector<int>ans;
        while(i>=0 && j<n){
            ans.push_back(mat[i][j]);
            i--;
            j++;
        }
        return ans;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int j=0;
        vector<int>ans;
        bool flag=1;
        for(int i=0;i<mat.size();i++){
            vector<int>temp=trav(i,j,m,n,mat);
            j=0;
            if(flag==1){
                for(int k=0;k<temp.size();k++){
                    ans.push_back(temp[k]);
                }
                flag=0;
            }
            else{
                for(int k=temp.size()-1;k>=0;k--){
                    ans.push_back(temp[k]);
                }
                flag=1;
            }
        }
        j=m-1;
        for(int i=1;i<mat[0].size();i++){
            vector<int>temp=trav(j,i,m,n,mat);
            j=m-1;
            if(flag==1){
                for(int k=0;k<temp.size();k++){
                    ans.push_back(temp[k]);
                }
                flag=0;
            }
            else{
                for(int k=temp.size()-1;k>=0;k--){
                    ans.push_back(temp[k]);
                }
                flag=1;
            }
        }
        return ans;
    }
};