class Solution {
public:
 
    string arrangeWords(string text) {
        string str="";
        int len=0;
        int i=0;
        map<int,vector<string>>mappe;
        // priority_queue<pair<int,string>>q;
        while(i<text.length()){
            if(text[i]==' '){
                // mappe[len]=str;
                mappe[len].push_back(str);
                // q.push({len,str});
                str="";
                i++;
                len=0;
            }
            else{
                len+=1;
                str+=text[i];
                i++;
            }
        }
        if(str!=""){
            // q.push({len,str});
            mappe[len].push_back(str);
        }
        // sort(mappe.begin(),mappe.end(),cmp);
        string ans="";
        bool flag=1;
        
        
        for(auto it:mappe){
            for(auto x:it.second){
                char b= tolower(x[0]);
                x[0]=b;
                ans+=x+" ";
            }
        }
        char c=toupper(ans[0]);
        ans[0]=c;
        ans.pop_back();
        return ans;
        
        
        
        
        
//         while(!q.empty()){
            
//             string x=q.top().second;
//             q.pop();
//             if(q.size()==0){
//                 char b=toupper(x[0]);
//                 x[0]=b;
//                 // flag=0;
                
//             }
//             else{
//                 char b=tolower(x[0]);
//                 x[0]=b;
//             }
//             if(flag!=1){
//                 ans.insert(0," ");
//             }
//             ans.insert(0,x);
//             flag=0;
//             // ans+=x;
            
//             // ans+=" ";
//         }
// //         for(auto x:mappe){
            
            
// //             string a=x.second;
// //             a[0]=b;
            
// //         }
        
//         return ans;
//     }
    }
};