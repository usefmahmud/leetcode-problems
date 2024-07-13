class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        vector<int> r;
        vector<pair<int,int>> robots;
        for(int i = 0; i < p.size(); i++){
            robots.push_back({p[i], i});
        } 
        sort(robots.begin(), robots.end());

        stack<int> line;
        for(auto x: robots){
            if(d[x.second] == 'L'){
                while(!line.empty() && h[x.second] > 0){
                    int last = line.top();

                    if(h[last] == h[x.second]){
                        h[last] = 0;
                        h[x.second] = 0;
                        line.pop();
                        continue;
                    }

                    if(h[last] < h[x.second]){
                        h[last] = 0;
                        h[x.second]--;
                        line.pop();
                        continue;
                    }

                    if(h[last] > h[x.second]){
                        h[last]--;
                        h[x.second] = 0;
                    }
                }
                continue;
            }else{
                line.push(x.second);
            }
        }

        for(auto x: h){
            if(x > 0){
                r.push_back(x);
            }
        }
        return r;
    }
};