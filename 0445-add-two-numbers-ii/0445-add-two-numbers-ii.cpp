/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>lo;
        vector<int>ls;
        ListNode* temp=l1;
        while(temp!=NULL){
            lo.push_back(temp->val);
            // temp=temp->val;
            temp=temp->next;
        }
        temp=l2;
        while(temp!=NULL){
            ls.push_back(temp->val);
            // temp=temp->val;
            temp=temp->next;
        }
        int i=lo.size()-1;
        int j=ls.size()-1;
        vector<int>ans;
        int carry=0;
        while(i>=0 && j>=0){
            int temp=lo[i]+ls[j]+carry;
            int digit=temp;
            if(i==0 && j==0){
                if(digit==0){
                    ans.insert(ans.begin(),digit);
                    i--;
                    j--;
                    break;
                }
                while(digit>0){
                    int p=digit%10;
                    digit=digit/10;
                    ans.insert(ans.begin(),p);  
                }
                
                i--;
                j--;
                break;
            }
            if(temp>9){
                digit=temp%10;
                temp=temp/10;
                carry=temp;
            }
            else{
                carry=0;
            }
            ans.insert(ans.begin(),digit);
            i--;
            j--;
            
        }
        while(i>=0){
            int temp=lo[i]+carry;
            int digit=temp;
            if(i==0){
                while(digit>0){
                    int p=digit%10;
                    digit=digit/10;
                    ans.insert(ans.begin(),p);  
                }
                
                i--;
                
                break;
            }
            if(temp>9 && i!=0){
                digit=temp%10;
                temp=temp/10;
                carry=temp;
            }
            else{
                carry=0;
            }
            ans.insert(ans.begin(),digit);
            i--;
        }
        while(j>=0){
            int temp=ls[j]+carry;
            int digit=temp;
            if(j==0){
                while(digit>0){
                    int p=digit%10;
                    digit=digit/10;
                    ans.insert(ans.begin(),p);  
                }
                
                
                j--;
                break;
            }
            if(temp>9 && j!=0){
                digit=temp%10;
                temp=temp/10;
                carry=temp;
            }
            else{
                carry=0;
            }
            ans.insert(ans.begin(),digit);
            j--;
        }
        ListNode* head1=new ListNode(ans[0]);
        temp=head1;
        for(int i=1;i<ans.size();i++){
            ListNode* temp1=new ListNode(ans[i]);
            temp->next=temp1;
            temp=temp->next;
        }
        
        return head1;
        
    }
};