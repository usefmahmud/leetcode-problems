class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> v{a[0]}; int i = 1;
        while(!v.empty()){
            if((v.back() > 0 && a[i] > 0) || (v.back() < 0 && a[i] < 0 || v.back() < 0 && a[i] > 0)){
                v.push_back(a[i]), i++;
            }else{
                if(abs(v.back()) == abs(a[i])){
                    v.pop_back(), i++;
                    if(v.empty() && i < a.size()) v.push_back(a[i]), i++;
                }else if(abs(v.back()) < abs(a[i])){
                    v.pop_back();
                    if(v.empty()) v.push_back(a[i]), i++;
                }else{
                    i++;
                }
            }

            if(i == a.size()){
                break;
            }
        }
        return v;
    }
};