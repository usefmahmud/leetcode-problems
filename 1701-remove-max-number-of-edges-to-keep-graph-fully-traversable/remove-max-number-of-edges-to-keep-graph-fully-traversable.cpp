class Solve{
    vector<int> p;
    int d;
public:
    Solve(int n){
        d = n;

        for(int i = 0; i <= n; i++){
            p.push_back(i);
        }
    }

    bool connect(int a, int b){
        if(find(a) == find(b)){
            return 0;
        }
        p[find(a)] = b;
        --d;
        return 1;
    }

    int find(int a){
        if(p[a] != a){
            p[a] = find(p[a]);
        }

        return p[a];
    }

    bool connected(){
        return d == 1;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        sort(edges.begin(), edges.end(), [] (vector<int> &a, vector<int> &b) { return a[0] > b[0]; });
        Solve alice(n), bob(n);
        int used = 0;

        for(auto& x: edges){
            int type = x[0], a = x[1], b = x[2];
            if(type == 1){
                if(alice.connect(a, b)){
                    used++;
                }
            }else if(type == 2){
                if(bob.connect(a, b)){
                    used++;
                }
            }else{
                used += alice.connect(a, b) | bob.connect(a, b);
            }
        }

        if(alice.connected() && bob.connected()){
            return edges.size() - used;
        }else{
            return -1;
        }
    }

};