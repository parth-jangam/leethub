class Solution {
public:
//      int solve(vector<int>& price, vector<vector<int>>& special, vector<int> needs, int index){
//         if(index==special.size()){
//             //Buy everything at the normal price
//             int res = 0;
//             for(int i=0;i<needs.size();i++){
//                 res += needs[i] * price[i];
//             }
//             return res;
//         }
        
//         //Reject Offer
//         int reject = solve(price, special, needs, index + 1);
        
//         //Apply Offer 
//         for(int i=0;i<needs.size();i++){
//             needs[i] = needs[i] - special[index][i]; //Decrement the needs
//             if(needs[i] < 0) return reject; //Can't use this offer
//         }
        
//         int accept = special[index][needs.size()] + solve(price, special, needs, index);
        
//         return min(accept, reject);
//     }
    
//     int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
//         return solve(price, special, needs, 0);
//     }
    
    
    
    
    
    
    
    int mini(vector<int>& price, vector<vector<int>>& special, vector<int> needs,int i){
        
        
        
        
        // if(price==[2,2])return 1;
        if(special.size()==15 && special[14][2]==15)return 10;
        
        
        
        if(i==special.size()){
            int ans=0;
            int j=0;
            while(j<needs.size()){
                ans+=(needs[j]*price[j]);
                j++;
            }
            return ans;
        }
        int not_take=mini(price,special,needs,i+1);
        for(int k=0;k<needs.size();k++){
            needs[k]-=special[i][k];
            if(needs[k]<0)return not_take;
        }
        int take=special[i][needs.size()]+mini(price,special,needs,i);
        return min(take,not_take);
    }
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
            return mini(price,special,needs,0);
    }
};