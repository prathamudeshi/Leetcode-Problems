// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int count = 0, ans = 0;
        for(char c: s){
            if(c == '(')
                count++;
            else if(c == ')')
                count--;
            ans = max(ans, count);
        }
        return ans;
    }
};
