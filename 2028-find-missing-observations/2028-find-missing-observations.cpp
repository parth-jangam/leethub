class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        int i=0;
        while(i<rolls.size()){
            sum+=rolls[i];
            i++;
        }
        int div=rolls.size()+n;
        int act=mean*div;
        int req=act-sum;
        vector<int>ans;
        if(req<0 || n>req){
            return ans;
        }
        if(6*n<req){
            return ans;
        }
        else{
            while(req-6>=n){
                req=req-6;
                ans.push_back(6);
                n--;
            }
            while(n!=1){
                req=req-1;
                ans.push_back(1);
                n--;
            }
            ans.push_back(req);
            
        }
        return ans;
    }
};