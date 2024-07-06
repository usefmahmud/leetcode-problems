class Solution {
public:
    int passThePillow(int n, int time) {
        int i = 1, dir = 1;
        while(time--){
            if(dir) i++;
            else i--;

            if(i == 1 || i == n) dir = !dir;
        }
        return i;
    }
};