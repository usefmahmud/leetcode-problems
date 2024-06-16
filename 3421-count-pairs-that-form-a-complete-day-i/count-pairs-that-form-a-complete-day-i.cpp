class Solution {
public:
    int countCompleteDayPairs(vector<int>& h) {
        int r = 0;
        for(int i=0; i<h.size(); i++){
            for(int j=i+1; j<h.size(); j++){
                if((h[i] + h[j]) % 24 == 0){
                    r++;
                }
            }
        }
        return r;
    }
};