class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int i=0;
        while(i<k){
            sum+=cardPoints[i];
            i++;
        }
        i--;
        if(k==cardPoints.size()){
            return sum;
        }
        int j=cardPoints.size()-1;
        int n=cardPoints.size();
        int ans=sum;
        while(n-k<=j){
            sum+=cardPoints[j];
            sum-=cardPoints[i];
            j--;
            i--;
            ans=max(ans,sum);
        }
        return ans;
    }
};