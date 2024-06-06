class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize) return false;
        
        map<int,int> m;
        for(auto& c: hand){
            ++m[c];
        }

        for(auto& x: m){
            while(x.second > 0){
                for(int i=0; i<groupSize; i++){
                    if(m[x.first+i] > 0){
                        --m[x.first+i];
                    }else{
                        return false;
                    }
                }
            }
        }

        return true;
    }
};