class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;

        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                myStack.push(c);
            }

            if(c == ')'){
                if(!myStack.empty() && myStack.top() == '('){
                    myStack.pop();
                } else {
                    return false;
                }
            }

            if(c == '}'){
                if(!myStack.empty() && myStack.top() == '{'){
                    myStack.pop();
                } else {
                    return false;
                }
            }

            if(c == ']'){
                if(!myStack.empty() && myStack.top() == '['){
                    myStack.pop();
                } else {
                    return false;
                }
            }
        }

        return myStack.empty();
    }
};
