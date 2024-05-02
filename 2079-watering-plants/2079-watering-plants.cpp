class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=1;
        int ori=capacity;
        if(capacity<plants[0])return -1;
        capacity=capacity-plants[0];
        int i=0;
        bool flag=0;
        while(i<plants.size()-1){
            if(capacity>=plants[i+1]){
                capacity-=plants[i+1];
                ans++;
                i++;
            }
            else{
                ans+=(i+1);
                ans+=(i+2);
                capacity=ori;
                capacity-=plants[i+1];
                i++;
            }
        }
        
        return ans;
    }
};