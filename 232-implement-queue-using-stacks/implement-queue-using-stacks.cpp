class MyQueue {
    stack<int> stk;
    stack<int> tmp;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!stk.empty()){
            tmp.push(stk.top());
            stk.pop();
        }
        stk.push(x);
        while(!tmp.empty()){
            stk.push(tmp.top());
            tmp.pop();
        }
    }
    
    int pop() {
        int x = stk.top();
        stk.pop();
        return x;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */