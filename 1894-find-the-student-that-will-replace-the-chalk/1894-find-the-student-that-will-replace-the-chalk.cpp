class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // vector<int>summi();
        long long int sum=0;
        int i=0;
        while(i<chalk.size()){
            sum+=chalk[i];
            // summi[i]=sum;
            i++;
        }
        i=chalk.size()-1;
        if(k%sum==0){
            return 0;
        }
        else{
            k=k%sum;
        }
        i=0;
        // cout<<k;
        int sum1=chalk[0];
        while(k>=sum1){
            i++;
            sum1+=chalk[i];
            // cout<<i<<" "<<sum1<<endl;
        }
        return i;
    }
};