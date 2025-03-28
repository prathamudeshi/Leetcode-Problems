// https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/?envType=problem-list-v2&envId=stack

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;        
        for(int i=0;i<s.length();i++){
            if(s[i] == 'a' || s[i] == 'b'){
                stk.push(s[i]);
            }
            else{
                if(stk.empty() || stk.top() != 'b'){
                    return false;
                }
                else{
                    stk.pop();
                    if(stk.empty() || stk.top() != 'a'){
                        return false;
                    }
                    else{
                        stk.pop();
                    }
                }
                }
            }
        if(stk.empty())
            return true;
        return false;
        }
};
