class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() == word2.length()){ 
            int freq1[26]{0};
            for(char& c: word1) freq1[c-'a']++;
            for(char& c: word2){
                if(!freq1[c-'a']){
                    return false;
                }
            }

            int freq2[26]{0};
            for(char& c: word2) freq2[c - 'a']++;
            sort(freq1, freq1+26);
            sort(freq2, freq2+26);

            for(int i=0; i<26; i++){
                if(freq1[i] != freq2[i]){
                    return false;
                }
            }
            return true;

        }
        return false;
    }
};