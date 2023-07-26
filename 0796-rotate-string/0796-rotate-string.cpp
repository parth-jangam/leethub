class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;

        }
        int i=0;
        int n=s.length();
        while(i<n){
            if(s==goal){
                return true;
            }
            char temp=goal[n-1];
            int j=n-1;
            while(j>0){
                goal[j]=goal[j-1];
                j--;
            }
            goal[0]=temp;
            i++;
        }
        return false;
    }
};