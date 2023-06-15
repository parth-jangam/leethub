/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return head;
        }
        // unordered_map<int,int>mappe;
        unordered_map<Node*,int>index;
        
        Node* temp=head;
        int i=0;
        while(temp!=NULL){
             index[temp]=i;
            i++;
            temp=temp->next;
        }
        int size=i;
        temp=head;
        vector<int >pos;
        i=0;
        while(temp!=NULL){
            if(temp->random==NULL){
                pos.push_back(-1);
                
                    
            }
            else{
            
                pos.push_back(index[temp->random]);
            }
            temp=temp->next;
            i++;
           
        }
       
        // index[-1]=-1;
        
//         for(auto x:mappe){
//             cout<<x.second<<" ";
            
//         }
        
        
        
        temp=head;
         i=0;
        Node* head1=new Node(head->val);
        Node* traversal=head1;
        temp=temp->next;
        while(temp!=NULL){
            Node* new_node= new Node(temp->val);
            traversal->next=new_node;
            traversal=traversal->next;
            temp=temp->next;
        }
        
        
        Node* end=traversal;
        end->next=head1;
        traversal=head1;
        // temp=head1;
        i=0;
        
        while(traversal!=end){
            temp=traversal;
            cout<<pos[i]<<endl;
            if(pos[i]==-1){
                traversal->random=NULL;
                
            }
            else{
                int j=i;
                if(j>pos[i]){
                    j=(j-size);
                }
                while(j<pos[i]){
                    temp=temp->next;
                    j++;
                }
                traversal->random=temp;
            }
            traversal=traversal->next;
            i++;
        }
        
        
        temp=traversal;
        if(pos[i]==-1){
            traversal->random=NULL;
                
        }
        else{
            int j=i;
            if(j>pos[i]){
                j=(j-size);
             }
            while(j<pos[i]){
                temp=temp->next;
                j++;
            }
            traversal->random=temp;
        }
        traversal->next=NULL;
        return head1;
    
        
            
            
            
            
            
            
            
            
            
       
    }
};