// https://leetcode.com/problems/make-the-string-great/submissions/1581089492/?envType=problem-list-v2&envId=stack

class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for (char ch : s) {
            if (!stk.empty() && (abs(stk.top() - ch) == 32)) {
                stk.pop();
            } else {
                stk.push(ch);
            }
        }

        string ans = "";
        while (!stk.empty()) {
            ans = stk.top() + ans;
            stk.pop();
        }
        return ans;
    }
};
