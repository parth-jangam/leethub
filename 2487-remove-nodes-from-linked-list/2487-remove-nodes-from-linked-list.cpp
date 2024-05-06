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
        ListNode* temp2=nullptr;
        ListNode* temp1=head->next;
        ListNode* temp=head;
        
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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=reverse(head);
        head=temp;
        int maxi=temp->val;
        
        while(temp->next!=NULL){
            if(temp->next->val<maxi){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
                maxi=temp->val;
            }
        }
        return reverse(head);
    }
};