class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count=arr.size()/4;
        unordered_map<int,int>mappe;
        for(int i=0;i<arr.size();i++){
            mappe[arr[i]]++;
            if(mappe[arr[i]]>count)return arr[i];
        }
        return -1;
    }
};