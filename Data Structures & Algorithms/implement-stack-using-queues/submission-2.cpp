class MyStack {
public:
    queue<int> myStack;

    MyStack() {
        
    }
    
    void push(int x) {
        myStack.push(x);
        int size = myStack.size();
        for(int i = 0; i < size - 1; i++){
            myStack.push(myStack.front());
            myStack.pop();
        }
    }
    
    int pop() {
        int answer = myStack.front();
        myStack.pop();
        return answer;
    }
    
    int top() {
        return myStack.front();
    }
    
    bool empty() {
        return myStack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */