class Solution {
public:
    int compress(vector<char>& chars) {
        int r = 0, i = 0; char last = chars[0];
        while(i < chars.size()){
            int l = 0;
            while(i < chars.size() && chars[i] == last){
                last = chars[i];
                l++, i++;
            }

            chars[r++] = last;
            if(l > 1){
                for(auto& c: to_string(l)){
                    chars[r++] = c;
                }
            }
            if(i < chars.size()){
                last = chars[i];
            }
        }
        return r;
    }
};