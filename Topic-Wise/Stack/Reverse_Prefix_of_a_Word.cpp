//https://leetcode.com/problems/reverse-prefix-of-word/?envType=problem-list-v2&envId=stack

class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> stk;
        for(int i=0;i<word.size();i++){
            stk.push(word[i]);
            if(word[i] == ch){
                break;
            }
            if(i == word.size()-1)
                return word;
        }
        int i=0;
        while(!stk.empty()){
            word[i++] = stk.top();
            stk.pop();
        }
        return word;
    }
};
