class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() <= 1) return s.length();
        deque<char> d;
        int i=0, r=0;
        while(i < s.length()){
            while(i < s.length() && find(d.begin(), d.end(), s[i]) == d.end()){
                d.push_back(s[i]);
                i++;
            }
            r = max(r, (int)d.size());
            while(i < s.length() && find(d.begin(), d.end(), s[i]) != d.end()){
                d.pop_front();
            }
        }
        return r;
    }
};