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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        vector<ListNode*>ans(k);
        int j=0;
        if(k>=count){
            while(temp!=NULL){
                ListNode* temp1=temp;
                ans[j]=(temp1);
                j++;
                temp=temp->next;
                temp1->next=NULL;
                
            }
        }
        else{
            int rem=count%k;
            int normal=count/k;
            int attempt=0;
            int p;
            if(rem==0){
                p=0;
            }
            else{
                p=1;
            }
            // cout<<rem;
            while(temp!=NULL){
                
                if(attempt==0){
                    // cout<<"hello";
                    int i=0;
                    ListNode* temp1=temp;
                    while(i<p+normal-1){
                        temp1=temp1->next;
                        i++;
                        
                    }
                    rem--;
                    ans[j]=(temp);
                    j++;
                    temp=temp1->next;
                    temp1->next=NULL;
                    attempt++;
                }
                else{
                    int i=0;
                    ListNode* temp1=temp;
                    while(i<p+normal-1){
                        temp1=temp1->next;
                        i++;
                    }
                    ans[j]=(temp);
                    j++;
                    temp=temp1->next;
                    temp1->next=NULL;
                    rem--;
                }
                if(rem<=0){
                    p=0;
                }
            }
        }
        return ans;
    }
};