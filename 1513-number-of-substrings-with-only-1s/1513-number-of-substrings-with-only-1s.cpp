class Solution {
public:
    
//     int numSub(string s) {
//         long  count=0;
//         int i=0;
//         // int j=0;
//         for(int i=0;i<s.length();++i){
           
//                long res=0;
//                 while(i<s.length() && s[i]=='1'){
//                     res++;
//                     i++;
//                 }
//                 count+=res*(res+1)/2;
//                 // i++;
            
           
//         }
//         return count%10000007;
//     }
    
    int numSub(string s) {
        long res = 0;
        for(int i =0; i < s.length(); ++i)
        {
            long count = 0;
            while(s[i] == '1')
                count++, i++;
            res += count*(count+1)/2;
        }
        return res%1000000007;
    }
};