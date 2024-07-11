class Solution {
    bool isPrefix(string& a, string& b){
        int i = 0, j = 0, n = a.length(), m = b.length();
        while(i < n && j < m){
            if(a[i] == b[j]){
                i++, j++;
                continue;
            }
            return false;
        }
        return true;
    }

    bool isSuffix(string& a, string& b){
        int i = a.length() - 1, j = b.length() - 1;
        while(i >= 0 && j >= 0){
            if(a[i] == b[j]){
                i--, j--;
                continue;
            }
            return false;
        }
        return i == -1;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int r = 0;
        for(int i = 0; i < words.size(); i++){
            for(int j = i + 1; j < words.size(); j++){
                if(isPrefix(words[i], words[j]) && isSuffix(words[i], words[j])){
                    r++;
                }
            }
        }
        return r;
    }
};