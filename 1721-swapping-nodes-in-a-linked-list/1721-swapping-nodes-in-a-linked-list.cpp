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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow=head;
        ListNode* fast=head;
        int i=0;
        ListNode* end=NULL;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            if(fast->next!=NULL && fast->next->next==NULL){
                end=fast->next;
            }
            fast=fast->next->next;
            i++;
        }
        if(fast!=NULL){
            i*=2;
            i++;
        }
        else{
            i*=2;
        }
        int num=i-k;
        if(end==NULL){
            end=fast;
        }
        if(num==0 || k==1){
            int temp=end->val;
            end->val=head->val;
            head->val=temp;
            return head;
        }
        slow=head;
        i=1;
        bool flag=1;
        while(i<=num || i<k){
            slow=slow->next;
            i++;
            if((k==i || i==num+1)&& flag==1 ){
                fast=slow;
                flag=0;
            }
        }
        int temp=fast->val;
        fast->val=slow->val;
        slow->val=temp;
        return head;
        
    }
};