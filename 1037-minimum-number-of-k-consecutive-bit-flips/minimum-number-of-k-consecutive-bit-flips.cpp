class Solution {
public:
    int minKBitFlips(vector<int>& n, int k) {
        int c = 0, t = 0, i = 0;
        while(i < n.size()){
            if(i-k >= 0 && n[i-k]==-1) --c;

            if(c%2 == n[i]){
                n[i] = -1;
                ++c, ++t;

                if(i+k > n.size()) return -1;
            }
            i++;
        }

        return t;
    }
};