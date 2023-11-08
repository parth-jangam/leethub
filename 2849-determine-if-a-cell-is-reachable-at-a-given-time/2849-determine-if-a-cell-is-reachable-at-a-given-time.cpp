class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int count=0;
//         if(sx<fx && sy<fy){
//             while(sx==fx || sy==fy){
//                 count++
//                 sx++;
//                 sy++;
//             }
//             count
//         }
//         if(sx==fx && sy<fy){
            
//         }
        if(sx== fx && sy==fy && t==1){
            return false;
        }
        
        int count1=abs(sx-fx),count2=abs(sy-fy);
        if(max(count1,count2)<=t)return true;
        return false;
        
    }
};