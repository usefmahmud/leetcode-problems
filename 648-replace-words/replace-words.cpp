class Solution {
public:
    string replaceWords(vector<string>& dict, string s) {
        unordered_map<string,int> m;
        for(auto& x: dict) m[x]++;
        string r = "";
        string curr="";
        s.push_back(' ');
        for(int i=0; i<s.length(); i++){
            if(s[i] != ' '){
                if(m[curr]){
                    r += curr + " ";
                    curr = "";
                    while(i < s.length() && s[i] != ' '){
                        i++;
                    }
                }else{
                    curr += s[i];
                }
            }else{
                r += curr + ' ';
                curr = "";       
            }
        }
        r.pop_back();
        return r;
    }
};