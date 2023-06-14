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
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count=0;
        ListNode* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        temp->next=head;
        count=count+1;
        int target=count-(k%count);
        int i=1;
        temp=head;
        while(i<target){
            temp=temp->next;
            i++;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        
    }
};