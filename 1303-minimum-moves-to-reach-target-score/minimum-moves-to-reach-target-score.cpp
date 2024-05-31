class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int r=0;
        if(target == 1){
            return 0;
        }else if(maxDoubles == 0){
            return --target;
        }
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
        }
        return r;
    }
};