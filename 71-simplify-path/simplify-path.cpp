#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        string temp;

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (!temp.empty()) {
                    if (temp == "..") {
                        if (!stack.empty()) stack.pop_back();
                    } 
                    else if (temp != ".") {
                        stack.push_back(temp);
                    }
                    temp.clear();
                }
            } else {
                temp += path[i];
            }
        }

        // last part handle
        if (!temp.empty()) {
            if (temp == "..") {
                if (!stack.empty()) stack.pop_back();
            } 
            else if (temp != ".") {
                stack.push_back(temp);
            }
        }

        string result = "/";
        for (int i = 0; i < stack.size(); i++) {
            result += stack[i];
            if (i != stack.size() - 1) result += "/";
        }

        return result;
    }
};