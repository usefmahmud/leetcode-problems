class TrieNode{
public:
    int fullWord;
    char val;
    TrieNode* chars[26];
    TrieNode(): fullWord(false){
        for(auto& x: chars){
            x = NULL;
        }
    }
};

class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for(auto& c: word){
            if(!curr->chars[c - 'a']){
                curr->chars[c - 'a'] = new TrieNode();
            }
            curr = curr->chars[c - 'a'];
        }
        curr->fullWord = 1;
    }
    
    bool search(string word) {
        int i = 0, n = word.length();
        TrieNode* curr = root;
        while(i < n && curr){
            curr = curr->chars[word[i++] - 'a'];
        }
        return curr && curr->fullWord;
    }
    
    bool startsWith(string prefix) {
        int i = 0, n = prefix.length();
        TrieNode* curr = root;
        while(i < n && curr){
            curr = curr->chars[prefix[i++] - 'a'];
        }
        return curr;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */