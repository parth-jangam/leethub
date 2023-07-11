class Solution {
public:
    // bool checker(unordered_map<int,int>mappe){
    //     for(auto x:mappe){
    //         if(x.second>=2){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mappe;
        int i=0;
        int j=0;
        int maxi=INT_MAX;
        while(j<cards.size()){
            mappe[cards[j]]++;
            // bool flag=checker(mappe);
            if(mappe[cards[j]]>=2){
                maxi=min(maxi,((j-i)+1));
                while(mappe[cards[j]]>=2){
                    mappe[cards[i]]--;
                    maxi=min(maxi,((j-i)+1));
                    i++;
                }
            }
            j++;
        }
        if(maxi==INT_MAX){
            return -1;
        }
        return maxi;
    }
};