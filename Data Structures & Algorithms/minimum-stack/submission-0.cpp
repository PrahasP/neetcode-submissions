class MinStack {
public:
    vector<int> actual_stack;
    vector<int> min_stack;
    int min = INT_MAX;

    MinStack() {}
    
    void push(int val) {
        actual_stack.push_back(val);
        int currentMin = min_stack.empty() ? val : std::min(val, min_stack.back());
        min_stack.push_back(currentMin);
    }
    
    void pop() {
        actual_stack.pop_back();
        min_stack.pop_back();
    }
    
    int top() {
        return actual_stack.back();
    }
    
    int getMin() {
        return min_stack.back();
    }
};
