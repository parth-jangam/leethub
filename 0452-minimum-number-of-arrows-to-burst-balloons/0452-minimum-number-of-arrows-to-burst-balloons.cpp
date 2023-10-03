class Solution {
public:
    bool collaborate(vector<vector<int>>& points,int i){
        if(points[i][0]<=points[i-1][1]){
            return true;
        }
        return false;
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int e=points[0][1];
        // cout<<points[0][0]<<endl;
        // cout<<points[1][0]<<endl;
        // return 0;
        // int i=1;
        // while(i<points.size()){
        //     if(collaborate(points,i)){
        //         long long int l=min(points[i][1],points[i-1][1]);
        //         long long int s=max(points[i][0],points[i-1][0]);
        //         // vector<int>a={points[]}
        //         vector<int>a;
        //         a.push_back(s);
        //         a.push_back(l);
        //         points.erase(points.begin()+i);
        //         points.erase(points.begin()+(i-1));
        //         points.insert(points.begin()+(i-1),a);
        //         continue;
        //     }
        //     i++;
        // }
        // return points.size();


        int count=1;
           for(int i=1;i<points.size();i++){
            if(e<points[i][0]){
                // long long int l=min(points[i][1],points[i-1][1]);
                // long long int s=max(points[i][0],points[i-1][0]);
                // // vector<int>a={points[]}
                // vector<int>a;
                // a.push_back(s);
                // a.push_back(l);
                // points.erase(points.begin()+i);
                // points.erase(points.begin()+(i-1));
                // points.insert(points.begin()+(i-1),a);
                // continue;
                count++;
                e=points[i][1];
            }
            else{
                e= min(e,points[i][1]);
            }
            // count++;
        }
        return count;
    }
};