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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==1){
            return head;
        }
        ListNode* temp=head;
        ListNode* temp1=head->next;
        ListNode* temp2=NULL;
        ListNode* back=NULL;
         ListNode* front=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        if(count-k==0){
            while(temp!=NULL){
                temp->next=temp2;
                temp2=temp;
                temp=temp1;
                if(temp1!=NULL){
                    temp1=temp1->next;
                }
            }
            return temp2;
        }
        
        int i=0;
        while(temp!=NULL && count>=k){
            i=0;
            temp2=NULL;
            front=temp;
            while(i<k){
              
                temp->next=temp2;
                temp2=temp;
                temp=temp1;
                if(temp1!=NULL){
                    temp1=temp1->next;
                }
                i++;
                
            }
            count=count-k;
            front->next=temp;
            if(back!=NULL){
                back->next=temp2;
                back=front;
            }
            else{
                head=temp2;
                back=front;
            }
                
            i=0;    
            
            
        }
        return head;
    }
};