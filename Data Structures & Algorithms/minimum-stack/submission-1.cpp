class MinStack {
public:
    vector<int> actual_stack;
    vector<int> min_stack;
    int min = INT_MAX;

    MinStack() {}
    
    void push(int val) {
        actual_stack.push_back(val);
        if(!min_stack.empty()){
            val = std::min(val,min_stack[min_stack.size() - 1]);
        } else {
            val = val;
        }
        min_stack.push_back(val);
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
