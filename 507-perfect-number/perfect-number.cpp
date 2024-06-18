class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> r;
        for(int i = 1; i <= num/2; i++){
            if(!(num%i)){
                r.push_back(i);
            }
        }
        return accumulate(r.begin(), r.end(), 0) == num;
    }
};