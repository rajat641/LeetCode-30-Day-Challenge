class Trie {
public:
    /** Initialize your data structure here. */
    struct node{
        char x;
        map< char, node* >m;
        bool ends = false;
        string word;
    };
    struct node * head = NULL;
    Trie() {
        head = new node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        string s = word;
        int sz = word.length();
        struct node * t = head;
        for(int i=0;i<sz;i++){
            if(t->m.find(s[i])==t->m.end()){
                struct node* temp = new node();
                temp->x = s[i];
                t->m[s[i]] = temp;
                t = temp;
            }else{
                t = t->m[s[i]];
            }
        }
        t->ends = true;
        t->word = word;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        struct node* t = head;
        for(int i=0;i<word.length();i++){
            if(t->m.find(word[i])==t->m.end()){
                return 0;
            }
            t=  t->m[word[i]];
        }
        return t->ends == true;
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        struct node* t = head;
        for(int i=0;i<prefix.length();i++){
            if(t->m.find(prefix[i])==t->m.end()){
                return 0;
            }
            t=  t->m[prefix[i]];
        }
        return 1; 
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
