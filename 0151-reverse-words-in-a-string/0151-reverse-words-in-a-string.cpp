class Solution {
public:
    string reverseWords(string str) {
        // string i=0;
//         string temp="";
//         string ans="";
//         int i=0;
//         int space=0;
//         while(i<s.length()){
//             while(i<s.length() && s[i]!=' '){
//                 temp+=s[i];
//                 i++;
//             }
//             ans.insert(0,temp);
//             temp="";
            
//             while(i!=s.length() && s[i]==' '){
//                 if(space==0){
//                     ans.insert(0," ");  
//                     space++;
//                 }
//                 i++;
//             }
//             space=0;
            
//         }
//         i=0;
//         while(ans[i]==' '){
//             ans.erase(ans.begin());
//         }
//         i=ans.size()-1;
//         while(ans[i]==' '){
//             ans.erase(ans.begin()+i);
//             i--;
//         }
//         return ans;
        int i=0;
	string ans="";
	string temp="";
	int count=0;
	while(str[i]==' '){
		i++;
	}
	while(i<str.length()){
		if(str[i]==' '){
			
			count++;
			if(count==1){
				ans.insert(0,temp);
				// char s=str[i];
				ans.insert(0," ");
			}
			temp="";
		}
		else{
			temp.push_back(str[i]);
			count=0;
		}
		i++;;
	}
	if(temp!=""){
		ans.insert(0,temp);
	}
	while(ans.length()>0 && ans[0]==' '){
		ans.erase(ans.begin());
	}
	return ans;

      }
};