// First Unique Character in a String
// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

#include &lt;string&gt;
#include &lt;vector&gt;

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector&lt;int&gt; count(26, 0);
        for(char c : s) count[c - 'a']++;
        for(int i = 0; i &lt; s.size(); i++) {
            if(count[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};