class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int sum=0;
        int i=0;
        while(i<gain.size()){
            sum+=gain[i];
            i++;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};