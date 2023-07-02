class Solution {
public:
    int maximumScore(int a, int b, int c) {
        // int small,mid,large;
        // return 0;
        vector<int>var;
        var.push_back(a);
        var.push_back(b);
        var.push_back(c);
        int count=0;
        sort(var.begin(),var.end());
        // cout<<var[0]<<endl;
        while(true){
            if(var[0]+var[1] <=var[2]){
                return count+ var[0]+var[1];
            }
            else{
                count++;
                var[0]--;
                var[1]--;
            }
        }
        return count;
    }
};