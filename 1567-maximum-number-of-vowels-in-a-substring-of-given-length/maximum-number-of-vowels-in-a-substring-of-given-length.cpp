class Solution {
public:
    int maxVowels(string s, int k) {
        int r=0, c=0;
        for(int i=0; i<k; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                c++,r++;
            }
        }
        int i=0,j=k-1;
        while(j < s.length()){
            j++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                c--;
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                c++;
            }
            i++;
            r = max(r,c);
        }
        return r;
    }
};