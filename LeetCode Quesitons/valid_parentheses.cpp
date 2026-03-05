// Valid Parentheses
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

#include &lt;string&gt;
#include &lt;stack&gt;

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack&lt;char&gt; st;
        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if((c == ')' &amp;&amp; top != '(') || (c == '}' &amp;&amp; top != '{') || (c == ']' &amp;&amp; top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};