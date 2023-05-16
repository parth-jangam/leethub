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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* temp=nullptr;
        ListNode* slow=head;
        ListNode* prev=nullptr;
        while(slow!=NULL && slow->next!=NULL  ){
            temp=slow->next;
            slow->next=temp->next;
            temp->next=slow;
            if(prev!=NULL){
                
                prev->next=temp;
            }
            else{
                head=temp;
            }
            prev=slow;
            slow=slow->next;
        }
        return head;
    }
};