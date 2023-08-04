class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
                maxi=prices[i];
            }
            if(prices[i]>maxi){
                maxi=prices[i];
            }
            ans=max(ans,maxi-mini);
        }
        return ans;
    }
};