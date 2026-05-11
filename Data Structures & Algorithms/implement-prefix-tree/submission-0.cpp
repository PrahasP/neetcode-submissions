class PrefixTree {
public:
    unordered_set<string> holder;

    PrefixTree() {
        
    }
    
    void insert(string word) {
        holder.insert(word);    
    }
    
    bool search(string word) {
        if(holder.find(word) != holder.end()){
            return true;
        }

        return false;
    }
    
    bool startsWith(string prefix) {
        for (const auto& elem : holder) {
            if(elem.size() < prefix.size()){
                continue;
            }

            if(elem.substr(0, prefix.size()) == prefix){
                return true;
            }
        }

        return false;
    }
};
