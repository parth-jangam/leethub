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
    ListNode* reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* temp1=head->next;
        ListNode* temp2=nullptr;
        
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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverse(head);
        head=temp;
        int carry=0;
        ListNode* dummy=NULL;
        while(temp->next!=NULL){
            int digit=(temp->val*2)+carry;
            int num=digit%10;
            carry=digit/10;
            temp->val=num;
            temp=temp->next;
            
        }
        int digit1=(temp->val*2)+carry;
        int num1=digit1%10;
        carry=digit1/10;
        temp->val=num1;
        if(carry!=0){
            ListNode* p=new ListNode(carry);
            temp->next=p;
            
        }
        return reverse(head);
        
    }
};