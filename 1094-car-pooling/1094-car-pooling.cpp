class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        for(int i=0;i<trips.size();i++){
            int temp=trips[i][0];
            trips[i][0]= trips[i][1];
             trips[i][1]=temp;
        }
        sort(trips.begin(),trips.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        int i=0;
        while(i<trips.size()){
            while(!q.empty() && q.top().first<=trips[i][0]){
                capacity+=q.top().second;
                q.pop();
            }
            if(trips[i][1]>capacity){
                return false;
            }
            else{
                capacity-=trips[i][1];
                q.push({trips[i][2],trips[i][1]});
            }
            i++;
        }
        return true;
    }
};