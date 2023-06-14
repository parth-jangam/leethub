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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=NULL;
        fast=slow->next;
        while(slow!=NULL){
            slow->next=temp;
            temp=slow;
            slow=fast;
            if(fast!=NULL){
                fast=fast->next;
            }
        }
        slow=head;
        while(temp!=NULL){
            if(slow->val!=temp->val){
                return false;
            }
            temp=temp->next;
            slow=slow->next;
        }
        return true;
    }
};