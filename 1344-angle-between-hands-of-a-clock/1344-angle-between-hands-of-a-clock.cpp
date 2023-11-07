#include<bits/stdc++.h>
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x=double(minutes)/5;
        double y=double(minutes)/60;
        cout<<y<<endl;
        double temp=hour+(y);
        // hour+=y*0.5;
        // cout<<temp<<endl;
        double ans=abs(x-temp);
        if(ans>6){
            ans=12-ans;
        }
        // cout<<ans;
        return ans*30;
    }
};