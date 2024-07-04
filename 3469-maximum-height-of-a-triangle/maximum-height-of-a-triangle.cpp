class Solution {
public:
    int maxTest(int r, int b){
        int i = 1, x = 0;
        while(r > 0 || b > 0){
            if(x && r >= i){
                r -= i;
            }else if(!x && b >= i){
                b -= i;
            }else{
                break;
            }
            ++i, x ^= 1;
        }

        return i-1;
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(maxTest(red, blue), maxTest(blue, red));
    }
};