class Solution {
public:
    int findNthDigit(int n) {
        int count=1;
        int sum=0;
        int mul=9;
        int g=n;
        while(true){
            // cout<<sum+(mul*(pow(10,count-1))*count)<<endl;
            // cout<<sum<<" "<<pow(10,count-1)<<" "<<count<<endl;
            if(n>(sum+(mul*(pow(10,count-1))*count))){
                
                sum+=(mul*(pow(10,count-1))*count);
                n=n-(mul*(pow(10,count-1))*count);
                count++;
            }
            else{
                break;
            }
        }
        // cout<<sum<<endl;
        int req=g-sum;
        int start=pow(10,count-1);
        int d=req/count;
        // cout<<req<<" "<<start<<endl;
        if(req%count==0){
            int i=1;
            
            while(i<d){
                
                start++;
                
                i++;
            }
            // cout<<start<<endl;
            // string temp=to_string(start);
            // string an="";
            // an+=temp[0];
            // int h=stoi(an);
            return start%10;
        }
        else{
            int i=0;
            while(i<d){
                // cout<<start<<endl;
                start++;
                i++;
            }
            cout<<count<<endl;
            int rep=count-(req%count);
            cout<<rep<<endl;
            i=0;
            cout<<start<<endl;
            while(i<rep){
                start=start/10;
                cout<<start<<endl;
                i++;
            }
            return start%10;
        }
    }
};