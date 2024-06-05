class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> f(26, INT_MAX);
        vector<string> r;
        for(int i=0; i<words.size(); i++){
            int freq[26]{0};
            for(auto& c: words[i]){
                freq[c - 'a']++;
            }
            for(int j=0; j<26; j++){
                f[j] = min(freq[j], f[j]);
            }
        }
        for(int i=0; i<26; i++){
            for(int j=0; j<f[i]; j++){
                r.push_back(string(1, 'a' + i));
            }
        }
        return r;
    }
};