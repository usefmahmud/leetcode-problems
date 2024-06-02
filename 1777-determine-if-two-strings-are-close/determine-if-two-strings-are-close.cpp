class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() == word2.length()){ 
            map<char,int> m1;
            map<char,int> m2;
            for(char& c: word1) m1[c]++;
            for(char& c: word2) m2[c]++;

            // check that chars are the same in each word
            for(auto& c: m1){
                if(!m2[c.first]){
                    return false;
                }
            }

            int freq1[26]{0};
            int freq2[26]{0};
            // check frequency of each char
            for(char& c: word1) freq1[c - 'a']++;
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