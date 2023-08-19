class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
           // sort(customers.begin(),customers.end)
        double cur_time=customers[0][0];
        double waiting=customers[0][1];
        double arr_time=customers[0][0]+customers[0][1];
        int i=1;
        while(i<customers.size()){
            // cout<<waiting<<endl;
            if(customers[i][0]>=arr_time){
                waiting+=(customers[i][1]);
                arr_time=customers[i][0]+customers[i][1];
                // i++;
            }
            else{
                
                waiting+=((arr_time+customers[i][1])-customers[i][0]);
                // cout<<waiting<<endl;
                arr_time+=customers[i][1];
            }
            i++;
            
        }
        int n=customers.size();
        return double(waiting/n);
    }
};