class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r = 0;
        for(auto c: nums){
            int x = 0;
            while(c){
                x++, c/=10;
            }
            r += (x%2==0);
        }
        return r;
    }
};