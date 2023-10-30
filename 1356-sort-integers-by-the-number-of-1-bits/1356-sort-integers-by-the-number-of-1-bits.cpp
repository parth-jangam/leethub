class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        // priority_queue<pair<int,int>,greater<pair<int,int>>,vector<pair<int,int>>>q;
        priority_queue<pair<int, int> > q;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            int count=0;
            while(temp>0){
                if(temp%2!=0){
                    count++;
                    
                }
                temp/=2;
            }
            q.push({count,arr[i]});
        }
        vector<int>ans;
        while(!q.empty()){
            int temp=q.top().second;
            ans.push_back(temp);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};