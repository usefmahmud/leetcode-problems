class Solution {
public:
    int maxVowels(string s, int k) {
        int r=0, c=0, i=0, j=k-1;
        unordered_map<char,int> m{
            {'a',1},
            {'e',1},
            {'i',1},
            {'o',1},
            {'u',1}
        };
        for(int x=i; x<k; x++){
            if(m[s[x]]){
                c++,r++;
            }
        }
        while(j < s.length()){
            i++, j++;
            if(m[s[i-1]]){
                c--;
            }
            if(m[s[j]]){
                c++;
            }
            r = max(r,c);
        }
        return r;
    }
};