class BrowserHistory {
public:
    class Node{
        public:
            Node* next;
            Node* prev;
            string data;
            Node(string x){
                this->data=x;
                this->next=NULL;
                this->prev=NULL;
            }
    };
    Node* temp;
    BrowserHistory(string homepage) {
        temp=new Node(homepage);
    }
    
    void visit(string url) {
        Node* n=new Node(url);
        temp->next=n;
        n->prev=temp;
        temp=temp->next;
        
    }
    
    string back(int steps) {
        while(temp->prev!=NULL && steps--){
            temp=temp->prev;
            
        }
        return temp->data;
    }
    
    string forward(int steps) {
        while(temp->next!=NULL && steps--){
            temp=temp->next;
            
        }
        return temp->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */