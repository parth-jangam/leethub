class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        sort(asteroids.begin(),asteroids.end());
        if(asteroids[0]>mass){
            return false;
        }
        int target=asteroids[asteroids.size()-1];
        int i=0;
        int sum=mass;
        // cout<<target<<endl;
        while(i<asteroids.size() && sum<target){
            if(sum<asteroids[i]){
                return false;
            }
            sum+=asteroids[i];
            i++;
        }
        return true;
    }
};