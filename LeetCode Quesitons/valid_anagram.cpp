// Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include &lt;string&gt;
#include &lt;vector&gt;

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector&lt;int&gt; count(26, 0);
        for(char c : s) count[c - 'a']++;
        for(char c : t) count[c - 'a']--;
        for(int i : count) if(i != 0) return false;
        return true;
    }
};