class SmallestInfiniteSet {
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int,int> r;
public:
    SmallestInfiniteSet(){
        for(int i = 1; i <= 1000; i++){
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int x = pq.top();
        pq.pop();
        ++r[x];
        return x;
    }
    
    void addBack(int num) {
        if(r[num]){
            pq.push(num);
            r.erase(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */