class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        int i=1;
        while(i<=n){
            q.push(i);
            i++;
        }
        while(q.size()!=1){
            int j=0;
            while(j<k-1){
                int m=q.front();
                q.pop();
                q.push(m);
                j++;
            }
            q.pop();
        }
        return q.front();
    }
};