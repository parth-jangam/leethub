class Solution {
public:
    int val(int lo){
        int count=0;
        while(lo!=1){
            if(lo%2==0){
                lo/=2;
            }
            else{
                lo=3*lo+1;
            }
            count++;
        }
        return count;
    }
    int getKth(int lo, int hi, int k) {
        priority_queue<pair<int,int>>q;
        for(int i=lo;i<=hi;i++){
            int ans=val(i);
            q.push({ans,i});
        } 
        while(q.size()>k){
            cout<<q.top().first;
            q.pop();
        }
        
        return q.top().second;
    }
};