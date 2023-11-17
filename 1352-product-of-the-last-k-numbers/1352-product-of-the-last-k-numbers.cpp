class ProductOfNumbers {
public:
    vector<int>inp;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        inp.push_back(num);
    }
    
    int getProduct(int k) {
        int n=inp.size();
        int prod=1;
        int i=n-1;
        while(i>=0 && k--){
            prod*=inp[i];
            i--;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */