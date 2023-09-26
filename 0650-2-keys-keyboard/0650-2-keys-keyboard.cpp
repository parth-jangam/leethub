class Solution {
public:
    int mini(int target,int copy_length,int n,int flag){
        // cout<<target<<endl;
        if(target==n){
            return 0;
        }
        if(target>n){
            return 1e9;
        }
        int x=1e9,y=1e9;
        if(flag==1){
            y=1+mini(target,target,n,0);    
        }
        else{
            x=1+min(mini(target+copy_length,copy_length,n,1),mini(target+copy_length,copy_length,n,0));
        }
        
        return min(x,y);
    }
    int minSteps(int n) {
        return mini(1,1,n,1);
    }
};