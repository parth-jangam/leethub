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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
        }
        ListNode* temp=nullptr;
        
        while(slow!=NULL){
            fast=slow->next;
            slow->next=temp;
            temp=slow;
            // fast->next=slow;
            slow=fast;
            // fast=fast->next;
        }
        int sum=0;
        while(head!=NULL && temp!=NULL){
            sum=max(sum,head->val+temp->val);
            head=head->next;
            temp=temp->next;
        }
        return sum;
    }
};