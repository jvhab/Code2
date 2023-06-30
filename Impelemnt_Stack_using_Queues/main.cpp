class MyStack {
public:
    queue<int> q1;
    MyStack() {
    }

    void push(int x) {
        q1.push(x);
        for (size_t i = 1; i < q1.size(); ++i) {
            int tmp = q1.front();
            q1.pop();
            q1.push(tmp);
        }
    }

    int pop() {
        int tmp = q1.front();
        q1.pop();
        return tmp;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
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