class MyQueue {
public:
    stack<int> st,t;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st.empty()){
            t.push(st.top());
            st.pop();  
        }
          st.push(x);
         while(!t.empty()){
            st.push(t.top());
            t.pop();  
        }
    }
    
    int pop() {
        int ans=st.top();
        st.pop();
        return ans;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.size()==0;
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