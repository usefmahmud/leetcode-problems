class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int a = 0; a <= sqrt(c); a++){
            double b = sqrt(c - pow(a,2));
            cout<<b<<endl;
            if(b == (int)b){
                return true;
            }
        }

        return false;
    }
};