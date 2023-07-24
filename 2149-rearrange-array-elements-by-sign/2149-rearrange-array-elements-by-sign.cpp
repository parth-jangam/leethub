class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int n=a.size();
        vector<int>ans(n);
    int i=0;
    int j=1;
    int k=0;
    while(k<a.size()){
        if(a[k]>0){
            ans[i]=a[k];
            k++;
            i+=2;
        }
        else{
            ans[j]=a[k];
            j+=2;
            k++;
        }
    }
    return ans;
    }
};