class Solution {
public:
    bool checker1(vector<vector<int>>&board,int m,int n,int x,int y){
        int count=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(i==0 && j==0)continue;
                int nrow=x+i;
                int ncol=y+j;
                if(nrow<m && ncol<n && nrow>=0 && ncol>=0 && board[nrow][ncol]==1){
                    count++;
                }
            }
        }
        if (count==3)return true;
        return false;
    }
    bool checker(vector<vector<int>>&board,int m,int n,int x,int y){
        int count=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(i==0 && j==0)continue;
                int nrow=x+i;
                int ncol=y+j;
                if(nrow<m && ncol<n && nrow>=0 && ncol>=0 && board[nrow][ncol]==1){
                    count++;
                }
            }
        }
        // cout<<count<<endl;
        if(count<2){
            return false;
        }
        else{
            if(count==2 || count==3){
                return true;
            }
            else{
                return false;
            }
        }
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>temp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    if(checker(board,m,n,i,j)){
                        temp[i][j]=1;
                    }
                }
                else{
                    if(checker1(board,m,n,i,j)){
                        temp[i][j]=1;
                    }
                }
            }
        }
        board=temp;
    }
};