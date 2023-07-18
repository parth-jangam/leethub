class Solution {
public:
    bool is_prime(int num){
        if(num==1){
            return false;
        }
        int i=2;
        while(i<=sqrt(num)){
            if(num%i==0){
                return false;
            }
            i++;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        ans.push_back(-1);
        ans.push_back(-1);
        int i=left;
        int prev=-1;
        int diff=INT_MAX;
        while(i<=right){
            if(is_prime(i)){
                if(prev!=-1 && i-prev<diff){
                    ans.clear();
                    ans.push_back(prev);
                    ans.push_back(i);
                    diff=i-prev;
                }
                prev=i;
            }
            i++;
        }
        // if(ans.size()==0)
        return ans;
    }
};