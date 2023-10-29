#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        map<pair<int,int>,bool>mappe;
        for(int i=0;i<queens.size();i++){
            mappe[{queens[i][0],queens[i][1]}]=true;
        }
        int i=king[0];
        int j=king[1];
        vector<vector<int>>ans;
        vector<int>temp;
        //digonal down
        while(i<8 && j<8){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                mappe[{i,j}]=false;
                ans.push_back(temp);
                break;
            }
            i++;j++;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        //digonal up
        while(i>=0 && j>=0){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;;
            }
            i--;j--;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        //row left
        while(j>=0){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;
            }
            j--;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        //row right
        while(j<8){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;
            }
            j++;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        //column up
        while(i>=0){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;
            }
            i--;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        //column down
        while(i<8){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;
            }
            i++;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        //digonal down
        while(i<8 && j>=0){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;
            }
            i++;j--;
        }
        temp.clear();
        i=king[0];
        j=king[1];
        while(j<8 && i>=0){
            if(mappe[{i,j}]==true){
                temp.push_back(i);
                temp.push_back(j);
                ans.push_back(temp);
                mappe[{i,j}]=false;
                break;
            }
            i--;j++;
        }
        temp.clear();
        return ans;
    }
};