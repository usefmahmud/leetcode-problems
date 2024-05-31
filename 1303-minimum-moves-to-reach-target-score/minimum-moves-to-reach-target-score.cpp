class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int r=0;
        while(target > 1){
            if(target % 2 == 0 && target != 2){
                if(maxDoubles){
                    target/=2;
                    --maxDoubles;
                }else{
                    --target;
                }
            }else{
                --target;
            }
            ++r;
            if(target > 1 && maxDoubles == 0){
                r += --target;
                break;
            }
        }
        return r;
    }
};