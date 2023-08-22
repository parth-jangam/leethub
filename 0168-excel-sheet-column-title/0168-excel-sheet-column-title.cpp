class Solution {
public:
    string convertToTitle(int columnNumber) {
        unordered_map<int,char>mappe;
        mappe[1]='A';
        mappe[2]='B';
        mappe[3]='C';
        mappe[4]='D';
        mappe[5]='E';
        mappe[6]='F';
        mappe[7]='G';
        mappe[8]='H';
        mappe[9]='I';
        mappe[10]='J';
        mappe[11]='K';
        mappe[12]='L';
        mappe[13]='M';
        mappe[14]='N';
        mappe[15]='O';
        mappe[16]='P';
        mappe[17]='Q';
        mappe[18]='R';
        mappe[19]='S';
        mappe[20]='T';
        mappe[21]='U';
        mappe[22]='V';
        mappe[23]='W';
        mappe[24]='X';
        mappe[25]='Y';
        mappe[0]='Z';
        string ans="";
        while(columnNumber>0){
            
            int res=columnNumber%26;
            
            ans+=mappe[res];
            if(columnNumber==26){
                break;
            }
            columnNumber=columnNumber/26;
            if(res==0){
                columnNumber=columnNumber-1;
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};