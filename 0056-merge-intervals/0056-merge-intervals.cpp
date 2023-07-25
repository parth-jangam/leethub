class Solution {
public:
  
   vector<vector<int>> merge(vector<vector<int>>& arr) {
//         vector<vector<int>>ans;
//         sort(intervals.begin(),intervals.end());
        
//         ans.push_back(intervals[0]);
//         int j=0;
//         for(int i=1;i<intervals.size();i++){
//             if(ans[j][1]>=intervals[i][0]){
//                 ans[j][1]=max(ans[j][1],intervals[i][1]);
//             }
//             else{
//                 ans.push_back(intervals[i]);
//                 j++;
//             }
//         }
//         return ans;
       int i=1;
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	// int j=0
	vector<int>temp=arr[0];
	for(int i=1;i<arr.size();i++){
		if(arr[i][0]<=temp[1]){
			int a=min(temp[0],arr[i][0]);
			int b=max(temp[1],arr[i][1]);
			temp.clear();
			temp.push_back(a);
			temp.push_back(b);
			// arr.erase(arr.begin()+(i-1));
			// arr.erase(arr.begin()+(i-1));
			// arr.insert(arr.begin()+(i-1),temp);
		}
		else{

			ans.push_back(temp);
			temp=arr[i];
			// j++;
		}
	}	
	ans.push_back(temp);
	return ans;
    }
};