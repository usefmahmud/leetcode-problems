class Solution {
public:
    int maxTest(int r, int b){
        int i = 1;
        while(r > 0 || b > 0){
            if(i % 2 && r >= i){
                r -= i;
            }else if(i % 2 == 0 && b >= i){
                b -= i;
            }else{
                break;
            }
            i++;
        }

        return i-1;
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(maxTest(red, blue), maxTest(blue, red));
    }
};