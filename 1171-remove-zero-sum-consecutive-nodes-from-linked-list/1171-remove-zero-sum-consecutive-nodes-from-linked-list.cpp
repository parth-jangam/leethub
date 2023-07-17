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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,int>mappe;
        ListNode* temp=head;
        int i=0;
        
        int sum=0;
        while(temp!=NULL){
            sum+=temp->val;
            // 
            if(sum==0){
                temp=temp->next;
                head=temp;
                continue;
            }
            if(mappe.find(sum)!=mappe.end()){
                
                int sum1=0;
                
                ListNode* temp1=head;
                int j=0;
                while(sum!=sum1){
                    
                    sum1+=temp1->val;
                    mappe[j]=sum1;
                    if(sum==sum1){
                        break;
                    }
                    temp1=temp1->next;
                }
                sum=sum1;
                temp1->next=temp->next;
                temp=temp1->next;
                
            }
            else{
                temp=temp->next;
                mappe[sum]=i;
            }
        }
        return head;
    }
};