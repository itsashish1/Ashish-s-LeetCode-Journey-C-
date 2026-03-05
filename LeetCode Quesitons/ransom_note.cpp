// Ransom Note
// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
// Each letter in magazine can only be used once in ransomNote.

#include &lt;string&gt;
#include &lt;vector&gt;

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector&lt;int&gt; count(26, 0);
        for(char c : magazine) count[c - 'a']++;
        for(char c : ransomNote) {
            if(--count[c - 'a'] &lt; 0) return false;
        }
        return true;
    }
};