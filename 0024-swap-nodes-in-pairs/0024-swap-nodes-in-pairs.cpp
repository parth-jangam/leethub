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
        ListNode* temp=head;
        int data;
        if(temp==NULL){
            return NULL;
        }
        temp=temp->next;
         if(temp==NULL){
            return head;
        }
        temp=head;
      
        while(temp->next!=NULL){
            data=temp->val;
            temp->val=temp->next->val;
            temp->next->val=data;
            if(temp->next->next==NULL){
                // temp=temp->next->next;
                break;
            }
            temp=temp->next->next;
            
            
        }
//         ListNode* temp2= head;
//         while(temp2!=NULL){
//             // cout<<temp2->val<<",";
//             temp2=temp2->next;
//         }
         
        
        return head;
    }
};