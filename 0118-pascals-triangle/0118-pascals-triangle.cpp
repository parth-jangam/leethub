class Solution {
public:
    vector<vector<int>> generate(int n) {
        // vector<int>temp;
        // vector<vector<int>>ans;
        // temp.push_back(1);
        // ans.push_back(temp);
        // if(numRows==1){
        //     return ans;
        // }
        // temp.push_back(1);
        // ans.push_back(temp);
        // if(numRows==2){
        //     return ans;
        // }
        // int i=2;
        // while(i<numRows){
        //     int j=1;
        //     vector<int>temp1;
        //     while(j<temp.size()){
        //         temp1.push_back(temp[j]+temp[j-1]);
        //         j++;
        //     }
        //     temp1.push_back(1);
        //     temp1.insert(temp1.begin(),1);
        //     temp=temp1;
        //     ans.push_back(temp);
        //     i++;
        // }
        // return ans;
        vector<vector<int>>ans;
    // int n;
    // cin>>n;
    vector<int>temp;
    temp.push_back(1);
    ans.push_back(temp);
    if(n==1){
        
        return ans;
    }
    temp.push_back(1);
    ans.push_back(temp);
    if(n==2){
        
        return ans;
    }
    int i=3;
    while(i<=n){
        vector<int>ans1;
        int j=1;
        while(j<temp.size()){
            ans1.push_back(temp[j]+temp[j-1]);
            j++;
        }
        ans1.push_back(1);
        ans1.insert(ans1.begin(),1);
        ans.push_back(ans1);
        temp=ans1;
        i++;
    }
    return ans;
    }
};