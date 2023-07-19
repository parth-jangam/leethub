class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        // unordered_map<int,bool>mappe;
        sort(special.begin(),special.end());
        int maxi=special[0]-bottom;
        int sum;
        int i=1;
        while(i<special.size()){
            sum=(special[i]-special[i-1])-1;
            maxi=max(sum,maxi);
            i++;
        }
        maxi=max(maxi,top-special[i-1]);
        return maxi;
        // int point=0;
        // int i=bottom;
        // int maxi=0;
        // int sum=0;
        // while(i<=top){
        //     if(point<special.size() && i==special[point]){
        //         sum=0;
        //         point++;
        //         i++;
        //     }
        //     else{
        //         sum++;
        //         i++;
        //     }
        //     maxi=max(maxi,sum);
        // }
        // return maxi;
        
        
        
        // 2nd
        
        
        // unordered_map<int,bool>mappe;
        //  int i=0;
        // while(i<special.size()){
        //     mappe[special[i]]=true;
        //     i++;
        // }
        // i=bottom;
        // long long int maxi=0;
        // long long int sum=0;
        // while(i<=top){
        //     if(mappe[i]){
        //         sum=0;
        //     }
        //     else{
        //         sum++;
        //     }
        //     i++;
        //     maxi=max(maxi,sum);
        // }
        // return maxi;
        
    }
};