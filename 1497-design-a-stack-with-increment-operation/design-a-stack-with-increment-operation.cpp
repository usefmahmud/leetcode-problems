class CustomStack {
    vector<int> v;
    int size;
public:
    CustomStack(int maxSize): size(maxSize){
        
    }
    
    void push(int x) {
        if(v.size() < size){
            v.push_back(x);
        }
    }
    
    int pop() {
        if(!v.empty()){
            int x = v.back();
            v.pop_back();
            return x;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int n = min(k, (int)v.size());
        for(int i = 0; i < n; i++){
            v[i] += val;
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