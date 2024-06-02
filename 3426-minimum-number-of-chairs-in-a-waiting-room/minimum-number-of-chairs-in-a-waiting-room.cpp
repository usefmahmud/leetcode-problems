class Solution {
public:
    int minimumChairs(string s) {
        int r=0,c=0;
        for(auto& x: s){
            if(x == 'E'){
                if(r == c){
                    r++,c++;
                }else if(r < c){
                    r++;
                }
            }else{
                r--;
            }
        }
        return c;
    }
};