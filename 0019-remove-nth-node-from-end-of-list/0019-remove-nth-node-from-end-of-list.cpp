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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        if(head==NULL || head->next==NULL){
            return nullptr;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        int j=count-n;
        if(j==-1){
            head=head->next;
            return head;
        }
        int i=0;
        temp=head;
        ListNode* temp2=nullptr;
        while(i<j){
            temp=temp->next;
            i++;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        return head;
    }
};