class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = 0;
        int full = numBottles, empty = 0;
        while(full){
            if(full >= numExchange){
                sum += full - full % numExchange;
                full = full%numExchange + full/numExchange;
                continue;
            }
            sum += full;
            full = 0;
        }

        return sum;
    }
};