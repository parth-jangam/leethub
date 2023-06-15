class FrontMiddleBackQueue {
public:
    // FrontMiddleBackQueue* q;
    queue<int>q;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        int n=q.size();
        q.push(val);
        int i=0;
        while(i<n){
            int a=q.front();
            q.pop();
            q.push(a);
            i++;
        }
    }
    
    void pushMiddle(int val) {
        if(q.empty()){
            q.push(val);
            return;
        }
        int n=q.size();
        int i=0;
        int mid=n/2;
        while(i<n){
            if(i==mid){
                q.push(val);
            }
            int a=q.front();
            q.pop();
            q.push(a);
            i++;
        }
    }
    
    void pushBack(int val) {
        q.push(val);
    }
    
    int popFront() {
        if(q.empty()){
            return -1;
        }
        int ans=q.front();
        q.pop();
        return ans;
    }
    
    int popMiddle() {
        if(q.empty()){
            return -1;
        }
        int n=q.size();
        int i=0;
        int mid=(n-1)/2;
        int ans;
        while(i<n){
            if(i==mid){
                ans=q.front();
                q.pop();
                i++;
                continue;
            }
            int a=q.front();
            q.pop();
            q.push(a);
            i++;
        }       
        return ans;
    }
    
    int popBack() {
        if(q.empty()){
            return -1;
        }
        int n=q.size();
        int i=0;
        while(i<n-1){
            int a=q.front();
            q.pop();
            q.push(a);
            i++;
        }
        int ans=q.front();
        q.pop();
        return ans;

    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */