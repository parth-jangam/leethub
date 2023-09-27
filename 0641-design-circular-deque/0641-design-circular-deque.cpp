class MyCircularDeque {
public:
    deque<int>q;
    int n;
    MyCircularDeque(int k) {
        n=k;
    }
    
    bool insertFront(int value) {
        if(q.size()<n){
            q.push_front(value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
         if(q.size()<n){
            q.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(q.size()>0){
            q.pop_front();
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(q.size()>0){
            q.pop_back();
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(!q.empty()){
            return q.front();
        }
        return -1;
    }
    
    int getRear() {
         if(!q.empty()){
            return q.back();
        }
        return -1;
    }
    
    bool isEmpty() {
        if(q.size()>0){
            return false;
        }
        return true;
    }
    
    bool isFull() {
        if(q.size()==n){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */