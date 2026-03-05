// Min Stack
// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
// Implement the MinStack class:
// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time for each function.

#include &lt;stack&gt;

using namespace std;

class MinStack {
public:
    stack&lt;int&gt; s;
    stack&lt;int&gt; min_s;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(min_s.empty() || val &lt;= min_s.top()) {
            min_s.push(val);
        }
    }
    
    void pop() {
        if(s.top() == min_s.top()) {
            min_s.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_s.top();
    }
};