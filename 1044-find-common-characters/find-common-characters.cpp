class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> m;
        vector<string> r;
        for(int i=0; i<words.size(); i++){
            int freq[26]{0};
            for(auto& c: words[i]){
                freq[c - 'a']++;
            }
            if(i == 0){
                for(int j=0; j<26; j++){
                    m[char('a' + j)] = freq[j];
                }
            }else{
                for(int j=0; j<26; j++){
                    m[char('a' + j)] = min(freq[j], m[char('a' + j)]);
                }
            }
        }
        for(auto& x: m){
            for(int i=0; i<x.second; i++){
                string g = "";
                g+=char(x.first);
                r.push_back(g);
            }
        }
        return r;
    }
};