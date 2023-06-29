class KthLargest {
public:
    priority_queue<int>max_heap;
    priority_queue<int,vector<int>,greater<int>>min_heap;
    int size;
    KthLargest(int k, vector<int>& nums) {
        int i=0;
        size=k;
        while(i<nums.size()){
            max_heap.push(nums[i]);
            i++;
        }
        i=0;
        while(!max_heap.empty() && i<k){
            min_heap.push(max_heap.top());
            max_heap.pop();
            i++;
        }
    }
    
    int add(int val) {
        if(!min_heap.empty() && val>min_heap.top() && size<=min_heap.size()){
            min_heap.push(val);
            min_heap.pop();
        }
        else{
            if(size>min_heap.size()){
                min_heap.push(val);
            }
        }
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */