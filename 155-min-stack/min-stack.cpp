class MinStack {
    stack<long long> st;
    long long minVal;
public:
    MinStack() {
        minVal = LLONG_MAX;
    }
    void push(int val) {
        if (st.empty()) {
            st.push(0);
            minVal = val;
        } else {
            st.push((long long)val - minVal);
            if (val < minVal) minVal = val;
        }
    }
    void pop() {
        if (st.empty()) return;
        long long diff = st.top();
        st.pop();
        if (diff < 0) minVal -= diff;
    }
    int top() {
        long long diff = st.top();
        if (diff > 0) return minVal + diff;
        else return minVal;
    }
    int getMin() {
        return minVal;
    }
};
