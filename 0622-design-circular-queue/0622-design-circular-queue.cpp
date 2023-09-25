class MyCircularQueue {
public:
    queue<int>q;
    int n;
    int ele=-1;
    MyCircularQueue(int k) {
        n=k;
    }
    
    bool enQueue(int value) {
        
        if(q.size()<n){
            ele=value;
            q.push(value);
            return true;
        }
        return false;
        
    }
    
    bool deQueue() {
        if(q.size()==0){
            return false;
        }
        if(q.size()==1){
            ele=-1;
            q.pop();
            return true;
        }
        q.pop();
        return true;
    }
    
    int Front() {
        if(q.empty()){
            return -1;
        }
        return q.front();   
    }
    
    int Rear() {
        if(ele==-1 || q.size()==0){
            return -1;
        }
        return ele;
    }
    
    bool isEmpty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(q.size()==n){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */