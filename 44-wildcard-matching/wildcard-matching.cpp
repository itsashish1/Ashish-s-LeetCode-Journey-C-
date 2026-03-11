class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0;
        int starIndex = -1, match = 0;

        while(i < s.size()) {

            if(j < p.size() && (p[j] == s[i] || p[j] == '?')) {
                i++;
                j++;
            }

            else if(j < p.size() && p[j] == '*') {
                starIndex = j;
                match = i;
                j++;
            }

            else if(starIndex != -1) {
                j = starIndex + 1;
                match++;
                i = match;
            }

            else {
                return false;
            }
        }

        

        while(j < p.size() && p[j] == '*')
            j++;

        return j == p.size();
    }
};