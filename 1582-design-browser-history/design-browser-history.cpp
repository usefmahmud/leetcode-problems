class BrowserHistory {
    stack<string> down, up;
public:
    BrowserHistory(string homepage) {
        down.push(homepage);
    }
    
    void visit(string url) {
        down.push(url);
        while(!up.empty()){
            up.pop();
        }
    }
    
    string back(int steps) {
        while(down.size()>1 && steps){
            up.push(down.top());
            down.pop();
            steps--;
        }
        return down.top();
    }
    
    string forward(int steps) {
        while(!up.empty() && steps){
            down.push(up.top());
            up.pop();
            steps--;
        }
        return down.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */