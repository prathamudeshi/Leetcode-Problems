// https://leetcode.com/problems/rotate-string/description/

class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size() != g.size())
            return false;
        if((s+s).find(g) != string::npos)
            return true;
        else return false;        
    }
};
