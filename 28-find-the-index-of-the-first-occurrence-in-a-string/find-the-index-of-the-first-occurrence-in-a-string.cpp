class Solution {
public:
    int strStr(string a, string b) {
        int r = -1;
        int i = 0;
        while(i < a.length()){
            int k = i, j = 0;
            while(k < a.length() && j < b.length() && a[k] == b[j]){
                k++, j++;
            }
            if(j == b.length()){
                r = i;
                break;
            }
            i++;
        }
        return r;
    }
};