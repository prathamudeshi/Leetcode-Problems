// https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/

class Solution {
public:
    char kthCharacter(int k) {
        return 'a' + __builtin_popcount(k-1);
    }
};
