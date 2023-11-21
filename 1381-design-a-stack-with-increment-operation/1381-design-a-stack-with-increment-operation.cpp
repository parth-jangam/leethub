class CustomStack {
public:
    vector<int>v;
    int s;
    CustomStack(int maxSize) {
        s=maxSize;
    }
    
    void push(int x) {
        if(v.size()!=s){
            v.insert(v.begin(),x);    
        }
        
    }
    
    int pop() {
        if(v.size()==0){
            return -1;
        }  
        int ans=v[0];
        v.erase(v.begin());
        
        return ans;
    }
    
    void increment(int k, int val) {
        int i=v.size()-1;
        while(i>=0 && k--){
            v[i]=v[i]+val;
            i--;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */