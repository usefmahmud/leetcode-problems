class CustomStack {
    stack<int> stk, tmp;
    int size;
public:
    CustomStack(int maxSize): size(maxSize){
        
    }
    
    void push(int x) {
        if(stk.size() < size){
            stk.push(x);
        }
    }
    
    int pop() {
        if(stk.empty()){
            return -1;
        }
        int x = stk.top();
        stk.pop();
        return x;
    }
    
    void increment(int k, int val) {
        if(stk.size() > k){
            int x = stk.size() - k;
            while(x--){
                tmp.push(stk.top());
                stk.pop();
            }
            while(k--){
                tmp.push(stk.top() + val);
                stk.pop();
            }
            while(!tmp.empty()){
                stk.push(tmp.top());
                tmp.pop();
            }
        }else{
            int x = stk.size();
            while(x--){
                tmp.push(stk.top() + val);
                stk.pop();
            }
            while(!tmp.empty()){
                stk.push(tmp.top());
                tmp.pop();
            }
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