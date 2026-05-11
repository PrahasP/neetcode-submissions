class Solution {
public:
    bool isValid(string s) {
        stack<char> charHolder;
        
        for(char c : s) {
            if (c == '{' || c == '(' || c == '['){
                charHolder.push(c);
                continue;
            }

            if(!charHolder.empty() && ((c == '}' && charHolder.top() == '{') || (c == ']' && charHolder.top() == '[') || (c == ')' && charHolder.top() == '('))){
                charHolder.pop();
            } else {
                return false;
            }
        }

        return charHolder.empty();
    }
};
