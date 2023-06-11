class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans(code.size(),0);
        int sum=0;
        if(k>0){
            int i=0;
            while(i<k){
                sum=sum+code[i];
                i++;
            }
            int ind=k-1;
            i=code.size()-1;
            while(i>=0){
                ans[i]=sum;
                sum=sum-code[ind];
                sum=sum+code[i];
                ind--;
                i--;
                if(ind<0){
                    ind=code.size()-1;
                }
                
                
            }
        }
        else{
            if(k<0){
            k=-k;
            int n=code.size();
            int i=n-1;
            while(i>=n-(k)){
                sum=sum+code[i];
                i--;
            }
            int ind=i+1;
            i=0;
            while(i<n){
                ans[i]=sum;
                sum=sum-code[ind];
                sum=sum+code[i];
                ind++;
                i++;
                if(ind==n){
                    ind=0;
                }
                
                
            }
            }
        }
        return ans;
    }
};