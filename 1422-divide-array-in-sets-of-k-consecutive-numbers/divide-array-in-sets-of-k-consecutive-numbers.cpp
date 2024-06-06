class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size() % k) return false;
        
        map<int,int> m;
        for(auto& c: nums){
            ++m[c];
        }

        for(auto& x: m){
            while(x.second > 0){
                for(int i=0; i<k; i++){
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