class MinStack {
public:
    vector<int> actualStack;
    vector<int> minStack;
    int currMin;

    MinStack() {
        
    }
    
    void push(int val) {
        actualStack.push_back(val);
        int currMin = minStack.empty() ? val : std::min(val, minStack.back());
        minStack.push_back(currMin);
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
