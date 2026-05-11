class Solution {
public:

    string encode(vector<string>& strs) {
        string output = "";
        for(string s : strs){
            output += s + "|";
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> output;
        
        string current_word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '|'){
                current_word += s[i];
            } else {
                output.push_back(current_word);
                current_word = "";
            }
        }

        return output;
    }
};
