// Excel Sheet Column Number
// Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.
// For example:
// A -&gt; 1
// B -&gt; 2
// C -&gt; 3
// ...
// Z -&gt; 26
// AA -&gt; 27
// AB -&gt; 28
// ...

#include &lt;string&gt;

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle) {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};