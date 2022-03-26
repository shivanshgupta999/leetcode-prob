class MyStack {
public:
      queue<int> q;
   
    MyStack() {
      
    }
    
    void push(int x) {
      
        int s=q.size();
          q.push(x);
        for (int i = 0; i < s; i++) {

        q.push(q.front());
        q.pop();
      }
    }
    
    int pop() {
     /*   int s=q.size();
        while(s!=1){
       int temp=q.front();
        q.pop();
        q.push(temp);
            s--;
        }*/
        int temp=q.front();
        q.pop();
        return temp;
    }
    
    int top() {
     /*    int s=q.size();
        while(s!=1){
       int temp=q.front();
        q.pop();
        q.push(temp);
            s--;
        }*/
        int temp=q.front();
        return temp;
    }
    
    bool empty() {
        return q.empty();
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