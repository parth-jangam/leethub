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
       ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        if(k==0){
            return head;
        }
        ListNode* temp=head;
        int j=1;
        while(temp->next!=NULL){
            temp=temp->next;
            j++;
        }
        
        k=k%j;
        if(k==0){

            return head;
        }
        temp->next=head;
        k=j-k;
        while(k>1){
            head=head->next;
            // i++;
            k--;
        }
        temp=head;
        head=head->next;
        temp->next=NULL;
        return head;
    }
};