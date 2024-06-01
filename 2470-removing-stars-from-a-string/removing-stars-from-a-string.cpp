class Solution {
public:
    string removeStars(string s) {
        vector<char> r;
        for(char& c:s){
            if(c != '*'){
                r.push_back(c);
            }else{
                r.pop_back();
            }
        }

        return string(r.begin(), r.end());
    }
};