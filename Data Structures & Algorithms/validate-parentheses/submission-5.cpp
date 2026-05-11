class Solution {
public:
    bool isValid(string s) {
        stack<char> holder;

        for(char c : s){
            if(c == '{' || c == '(' || c == '['){
                holder.push(c);
                continue;
            }

            if(!holder.empty() && ((c == '}' && holder.top() == '{') || (c == ']' && holder.top() == '[') || (c == ')' && holder.top() == '('))){
                holder.pop();
            } else {
                return false;
            }
        }

        return holder.empty();
    }
};
