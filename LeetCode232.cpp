class MyQueue {
public:
    stack<int> input,output;
    MyQueue() {
    // do nothing    
    }
    
    void push(int x) {
        input.push(x);
    }
    void exchange()
    {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
    }
    int pop() {
        int i;
        if(output.empty())
        {
            exchange();
        }
        i = output.top();
        output.pop();
        return i;
    }

    int peek(void) {
       if(output.empty())
        {
            exchange();
        }
        return output.top();
    }

    bool empty(void) {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
