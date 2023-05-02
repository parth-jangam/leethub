class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>factor;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0 ){
                if(i!=n/i){
                    factor.push_back(i);
                    factor.push_back(n/i);
                }
                else{
                    factor.push_back(i);    
                }
                
                // fa
            }
            
        }
        sort(factor.begin(),factor.end());
        // factor.push_back(n);
        if(k>factor.size()){
            return -1;
        }
        return factor[k-1];
    }
};