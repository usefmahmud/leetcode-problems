class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;
        int full = numBottles, empty = 0;
        while(full >= numExchange){
            sum += full / numExchange;

            empty = full % numExchange;
            empty += full / numExchange;
            full = empty;

            empty = 0;
        }

        return sum;
    }
};