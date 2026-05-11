class WordDictionary {
public:
    unordered_set<string> holder;

    WordDictionary() {
        
    }
    
    void addWord(string word) {
        holder.insert(word);    
    }
    
    bool search(string word) {
        for (string w : holder) {
            if (w.length() != word.length()) continue;
                
            int i = 0;
            
            while (i < w.length()) {
                if (w[i] == word[i] || word[i] == '.') {
                    i++;
                } else {
                    break;
                }
            }

            if (i == w.length()) {
                return true;
            }
        }

        return false;
    }
};
