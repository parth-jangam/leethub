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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* temp1=head->next;
        ListNode* temp2=NULL;
        while(temp!=NULL){
            temp->next=temp2;
            temp2=temp;
            temp=temp1;
            if(temp1!=NULL){
                temp1=temp1->next;
            }
        }
        head=temp2;
        return head;
        
        
    }
}; 