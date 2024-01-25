public:
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(copy.empty()  || val<=getMin())
            copy.push(val);
    }
    
    void pop() {
        if(s1.top()==copy.top())
            copy.pop();
        s1.pop();    
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return copy.top();
    }
};
//TC=O(N)