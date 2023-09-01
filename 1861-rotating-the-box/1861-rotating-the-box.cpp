class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();
        vector<vector<char>>mat(n,vector<char>(m,'.'));
        int x=0,y=0;
        for(int i=m-1;i>=0;i--){
            for(int j=0;j<n;j++){
                mat[x][y]=box[i][j];
                x++;
            }
            x=0;
            y++;
            
        }
        for(int i=0;i<m;i++){
            vector<int>indexex;
            for(int j=n-1;j>=0;j--){
                if(mat[j][i]=='*'){
                    indexex.clear();
                    continue;
                }
                else{
                    if(mat[j][i]=='.'){
                        indexex.push_back(j);
                    }
                    if(mat[j][i]=='#' && indexex.size()>0){
                        swap(mat[j][i],mat[indexex[0]][i]);
                        indexex.erase(indexex.begin()+0);
                        indexex.push_back(j);
                    }
//                     if(mat[j][i]=='.' && mat[j-1][i]=='#'){
//                         swap(mat[j][i],mat[j-1][i]);
                        
//                     }
                    // else{
                    //     continue;
                    // }
                }
            }
        }
        return mat;
        
    }
};