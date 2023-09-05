class Solution {
public:
    void rotate(vector<vector<int>>&ans,vector<vector<int>>& grid, int k,int i,int j,int m,int n){
        int a=i,b=j,c=m,d=n;
        vector<int>r;
        for(int p=j;p<n;p++){
            r.push_back(grid[i][p]);
            
        }
        i++;
        j=n-1;
        for(int q=i;q<m;q++){
            r.push_back(grid[q][j]);
        }
        i=m-1;
        j--;
        for(int p=j;p>=b;p--){
            r.push_back(grid[i][p]);
            
        }
        i--;
        j=b;
        for(int q=i;q>a;q--){
            r.push_back(grid[q][j]);
        }
        int y=0;
        // cout<<r.size()<<endl;
        k=k%r.size();
        while(y<k){
            int x=r[0];
            r.erase(r.begin()+0);
            r.push_back(x);
            y++;
        }
        
        
        i=a;
        j=b;
        int g=0;
        for(int p=j;p<n;p++){
            // r.push_back(grid[i][p]);
            ans[i][p]=r[g];
            g++;
            
        }
        i++;
        j=n-1;
        for(int q=i;q<m;q++){
            // r.push_back(grid[q][j]);
            ans[q][j]=r[g];
            g++;
        }
        i=m-1;
        j--;
        for(int p=j;p>=b;p--){
            // r.push_back(grid[i][p]);
            ans[i][p]=r[g];
            g++;
            
        }
        i--;
        j=b;
        for(int q=i;q>a;q--){
            // r.push_back(grid[q][j]);
            ans[q][j]=r[g];
            g++;
        }

        
    }
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int p=min(m,n);
        int i=0;
        int j=0;
        p=p/2;
        for(int l=0;l<p;l++){
            // cout<<i<<" "<<j<<" "<<m<<" "<<n<<" "<<endl;
            rotate(ans,grid,k,i,j,m,n);
            i++;
            j++;
            m--;
            n--;
        }
        return ans;
    }
};