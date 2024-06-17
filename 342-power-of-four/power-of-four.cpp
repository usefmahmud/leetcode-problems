class Solution {
public:
    bool isPowerOfFour(int n) {
        double x = n;
        while(x >= 4){
            x /= 4;
        }
        return x == 1.0;
    }
};