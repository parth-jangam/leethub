class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>per;
        int i=0;
        while(i<n){
            per.push_back(i);
            i++;
        }
        vector<int>temp;
        int count=0;
        temp=per;
        
        while(count==0 || temp!=per){
            int i=0;
            int n=per.size();
            vector<int>temp1(n);
            while(i<per.size()){
                if(i%2==0){
                    temp1[i]=per[i / 2];
                }
                else{
                    temp1[i]=per[n / 2 + (i - 1) / 2];
                }
                i++;
            }
            per=temp1;
            count++;
        }
        return count;
    }
};