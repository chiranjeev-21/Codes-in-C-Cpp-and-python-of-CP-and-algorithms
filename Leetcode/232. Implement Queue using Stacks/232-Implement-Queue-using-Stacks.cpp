class MyQueue {
public:

    //Algo : 
    // 1) Use 2 stacks, one for storing the input elements in reverse order and the 2nd for peek/pop operations.
    // 2) Whever you push an element, push it onto st1. This will push all elements in reverse order, but that will be sorted aage jaake.
    // 3) Whever pop is encountered :
    //     ->Check if the second stack is empty, if yes then push all the elements from st1 to this stack i.e st2. This will bring all the
    //       elements in their correct order for popping and peeking.
    //     ->If second stack is not empty, simply pop it as that will be your next most old element out of all and keep going.
    // 4) Do the same for peek operation
    // 5) For empty, check if both st1 and st2 are empty.
    stack<int>st1,st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int temp = peek();
        st2.pop();
        return temp;
    }
    
    int peek() {
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
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