class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> main;
    stack<int> min;
    
    MinStack() {    
        
    }
    
    void push(int x) {
        main.push(x);
        if((min.empty()) || (!min.empty() && x <= min.top())) {
            min.push(x);
        }
    }
    
    void pop() {
        int x = main.top();
        main.pop();
        if(min.top() == x) {
            min.pop();
        }
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
