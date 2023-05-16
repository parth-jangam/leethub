class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int sum=0;
        int i=piles.size()-2;
        int j=0;
        while(i>j){
            sum+=piles[i];
            i=i-2;
            j++;
        }
        return sum;
    }
};