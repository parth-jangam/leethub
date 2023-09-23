class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        sort(timePoints.begin(),timePoints.end());
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            string tempH1="";
            tempH1+=timePoints[i-1][0];
            tempH1+=timePoints[i-1][1];
            string tempM1="";
            tempM1+=timePoints[i-1][3];
            tempM1+=timePoints[i-1][4];
            string tempH2="";
            tempH2+=timePoints[i][0];
            tempH2+=timePoints[i][1];
            string tempM2="";
            tempM2+=timePoints[i][3];
            tempM2+=timePoints[i][4];
            
            
            
            int h1=stoi(tempH1);
            int m1=stoi(tempM1);
            int h2=stoi(tempH2);
            int m2=stoi(tempM2);
            int maxi;
            if(h1==h2){
                maxi=m2-m1;
            }
            else{
                if(m1<m2){
                    maxi=((60*(h2-h1))+(m2-m1));
                }
                else{
                    maxi=((60*(h2-h1-1))+(60-(m1-m2)));
                }
            }
            ans=min(ans,maxi);
        }
        
        
        
        
            string tempH1="";
            tempH1+=timePoints[n-1][0];
            tempH1+=timePoints[n-1][1];
            string tempM1="";
            tempM1+=timePoints[n-1][3];
            tempM1+=timePoints[n-1][4];
            string tempH2="";
            tempH2+=timePoints[0][0];
            tempH2+=timePoints[0][1];
            string tempM2="";
            tempM2+=timePoints[0][3];
            tempM2+=timePoints[0][4];
            
            
            
            int h1=stoi(tempH1);
            int m1=stoi(tempM1);
            int h2=stoi(tempH2);
            int m2=stoi(tempM2);
            int maxi;
        
            h2=h2+24;
            if(h1==h2){
                maxi=m2-m1;
            }
            else{
                if(m1<m2){
                    maxi=((60*(h2-h1))+(m2-m1));
                }
                else{
                    maxi=((60*(h2-h1-1))+(60-(m1-m2)));
                }
            }
            ans=min(ans,maxi);
        
        
        
        
        return ans;
    }
};