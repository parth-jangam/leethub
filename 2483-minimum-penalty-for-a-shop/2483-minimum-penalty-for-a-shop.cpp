class Solution {
public:
    int bestClosingTime(string customers) {
        int no_y=0;
        int no_n=0;
        int i=0;
        while(i<customers.length()){
            if(customers[i]=='Y'){
                no_y++;
            }
            else{
                no_n++;
            }
            i++;
        }
        int maxi=INT_MAX;
        int no_till=0;
        int yes_till=0;
        int ans=0;
        i=0;
        while(i<customers.length()){
            int temp=no_till+(no_y-yes_till);
            if(temp<maxi){
                maxi=temp;
                ans=i;
            }
            if(customers[i]=='Y'){
                yes_till++;
            }
            else{
                no_till++;
            }
            i++;
        }
        int tmp=no_till+(no_y-yes_till);
        if(tmp<maxi){
            maxi=tmp;
            ans=i;
        }
        return ans;
    }
};