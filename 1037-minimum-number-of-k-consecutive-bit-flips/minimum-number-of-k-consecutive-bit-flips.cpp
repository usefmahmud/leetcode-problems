class Solution {
public:
    int minKBitFlips(vector<int>& n, int k) {
        int c = 0, t = 0, i = 0;
        vector<int> f(n.size(), 0);
        while(i < n.size()){
            if(i-k >= 0 && f[i-k]) --c;

            if((!(c%2) && !n[i]) || (c%2 && n[i])){
                f[i] = 1;
                ++c, ++t;

                if(i+k > n.size()) return -1;
            }
            i++;
        }

        return t;
    }
};