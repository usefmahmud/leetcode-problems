class Solution {
public:
    bool checkPerfectNumber(int num) {
        int r = 0;
        for(int i = 1; i <= num/2; i++){
            if(!(num%i)){
                r += i;
                r += num/i;
            }
        }

        return (r-num+1)/2 == num;
    }
};