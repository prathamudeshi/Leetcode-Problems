// https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> reverse_mp;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) == mp.end() && reverse_mp.find(t[i]) == reverse_mp.end()) {
                mp[s[i]] = t[i];
                reverse_mp[t[i]] = s[i];
            } else {
                if (mp[s[i]] != t[i] || reverse_mp[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};
