#include<bits/stdc++.h>
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int i=0;
        while(i<boxTypes.size()){
            int temp=boxTypes[i][0];
            boxTypes[i][0]=boxTypes[i][1];
            boxTypes[i][1]=temp;
            // cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<endl;
            i++;
            
        }
        sort(boxTypes.begin(),boxTypes.end());
        int limit=0;
        int ans=0;
        i=boxTypes.size()-1;
        while(i>=0 && limit<truckSize){
            if(boxTypes[i][1]<=truckSize-limit){
                limit+=boxTypes[i][1];
                ans+=boxTypes[i][0]*boxTypes[i][1];
            }
            else{
                int prod=truckSize-limit;
                ans+=(prod*boxTypes[i][0]);
               
                break;
            }
            // cout<<limit<<" "<<ans<<endl;
            i--;
        }
        return ans;
    }
};