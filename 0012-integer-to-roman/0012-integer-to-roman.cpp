class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string>mappe;
        mappe[1]="I";
        mappe[2]="II";
        mappe[3]="III";
        mappe[4]="IV";
        mappe[5]="V";
        mappe[6]="VI";
        mappe[7]="VII";
        mappe[8]="VIII";
        mappe[9]="IX";
        mappe[10]="X";
        mappe[20]="XX";
        mappe[30]="XXX";
        mappe[40]="XL";
        mappe[50]="L";
        mappe[60]="LX";
        mappe[70]="LXX";
        mappe[80]="LXXX";
        mappe[90]="XC";
        mappe[100]="C";
        mappe[200]="CC";
        mappe[300]="CCC";
        mappe[400]="CD";
        mappe[500]="D";
        mappe[600]="DC";
        mappe[700]="DCC";
        mappe[800]="DCCC";
        mappe[900]="CM";
        mappe[1000]="M";
        mappe[2000]="MM";
        mappe[3000]="MMM";
        string ans;
        int count=0;
        while(num>0){
            
            int digit=num%10;
            if(digit==0){
                count++;
                num=num/10;
                continue;
            }
            else{
                // if(count!=0){
                    digit=digit*pow(10,count);
                
            }
            ans.insert(0,mappe[digit]);
            num=num/10;
            count++;
        }
        return ans;
        
    }
};