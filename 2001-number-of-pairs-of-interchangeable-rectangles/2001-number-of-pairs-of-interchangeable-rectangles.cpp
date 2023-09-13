class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long ans=0;
        unordered_map<double,long long>mappe;
        int i=0;
        while(i<rectangles.size()){
            double temp=(double)rectangles[i][0]/(double)rectangles[i][1];
            // if(mappe.find(temp)!=mappe.end()){
            //     count++;
            // }
            mappe[temp]++;
            if(mappe[temp]>=2){
                ans+=(mappe[temp]-1);
            }
            i++;
            
        }
        return ans;
    }
};