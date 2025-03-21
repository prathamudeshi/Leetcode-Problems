// https://leetcode.com/problems/valid-parentheses/?envType=problem-list-v2&envId=stack

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                stk.push(x);
            } else {
                if(stk.empty())
                    return false;
                if (x == ')') {
                    if (stk.top() == '(')
                        stk.pop();
                    else
                        return false;
                } else if (x == '}') {
                    if (stk.top() == '{')
                        stk.pop();
                    else
                        return false;
                } else if (x == ']') {
                    if (stk.top() == '[')
                        stk.pop();
                    else
                        return false;
                }
            }
        }
        return stk.empty();
    }
};
