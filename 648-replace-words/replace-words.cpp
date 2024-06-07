class Solution {
public:
    string replaceWords(vector<string>& dict, string s) {
        string r = "";
        unordered_map<string,int> m;
        for(auto& x: dict) m[x]++;
        string curr="";
        for(int i=0; i<s.length(); i++){
            if(i == s.length() - 1){
                r += curr + s[i] + ' ';
            }
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
                if(curr != ""){
                    r += curr + ' ';
                    curr = "";       
                }
            }
        }
        return r.substr(0,r.length()-1);
    }
};