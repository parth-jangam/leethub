class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int i=1;
        int n=salary.size();
        double ans=0;
        while(i<n-1){
            ans+=salary[i];
            i++;
        }
        int div=(n-1)-1;
        ans/=div;
        // double ans=salary[0]+salary[salary.size()-1];
        return ans;
    }
};