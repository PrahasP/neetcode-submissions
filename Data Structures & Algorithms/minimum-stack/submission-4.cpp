class MinStack {
public:
    vector<int> actualStack;
    vector<int> minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        actualStack.push_back(val);
        if(minStack.empty()){
            minStack.push_back(val);
        } else {
            minStack.push_back(std::min(minStack.back(), val));
        }
    }
    
    void pop() {
        actualStack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return actualStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
