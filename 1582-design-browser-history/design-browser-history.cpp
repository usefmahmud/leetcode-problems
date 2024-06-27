class BrowserHistory {
    vector<string> history;
    int i,l;
public:
    BrowserHistory(string homepage): i(0), l(0) {
        history.push_back(homepage);
    }
    
    void visit(string url) {
        if(i < l){
            history.erase(history.begin()+i+1, history.end());
        }
        history.push_back(url), l = ++i;
    }
    
    string back(int steps) {
        i = max(0, i-steps);
        return history[i];
    }
    
    string forward(int steps) {
        i = min(l, i+steps);
        return history[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */