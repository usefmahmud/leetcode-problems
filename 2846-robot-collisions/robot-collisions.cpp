class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        vector<int> r;
        vector<pair<int,int>> robots;
        for(int i = 0; i < p.size(); i++){
            robots.push_back({p[i], i});
        } 
        sort(robots.begin(), robots.end());

        vector<pair<int,int>> line;
        for(auto x: robots){
            if(d[x.second] == 'L'){
                while(!line.empty() && h[x.second] > 0){
                    auto last = line.back();

                    if(h[last.second] == h[x.second]){
                        h[last.second] = 0;
                        h[x.second] = 0;
                        line.pop_back();
                        continue;
                    }

                    if(h[last.second] < h[x.second]){
                        h[last.second] = 0;
                        h[x.second]--;
                        line.pop_back();
                        continue;
                    }

                    if(h[last.second] > h[x.second]){
                        h[last.second]--;
                        h[x.second] = 0;
                    }
                }
                continue;
            }else{
                line.emplace_back(x);
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