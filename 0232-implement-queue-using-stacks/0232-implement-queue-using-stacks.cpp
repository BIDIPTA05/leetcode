class MyQueue {
public:
    
    stack <int> input, temp;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int val = peek();
        temp.pop();
        return val;
    }
    
    int peek() {
        if(temp.empty()){
            while(input.empty()==false){
                temp.push(input.top());
                input.pop();
            }
        }
           return temp.top();
    }
    
    bool empty() {
        return input.empty() && temp.empty();
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