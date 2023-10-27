class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n+2,0);
            for(auto&booking:bookings){
                ans[booking[0]]+=booking[2];
                ans[booking[1]+1]+=-booking[2];
            }
            for(int i=1; i<ans.size(); ++i)
                ans[i] += ans[i-1];
                ans.erase(ans.begin());
                ans.pop_back();
                return ans;
            }
    
};